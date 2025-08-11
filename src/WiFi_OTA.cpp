// 
// 
// 
#include "define.h"
#if USE_OTA 
#include "WiFi_OTA.h"

/*
const char* ssid = "SHEES-BOX";
const char* pwd = "21121950SHEES";
const char* host = "esp32-solar";
*/

WebServer server(80);

void wifi_ota_setup()
{
	if (MDNS.begin(host)) {
		if (isSerial) {
			Serial.println("mDns responder started");
		}
	}

	server.on("/", []() {
		server.send(200, "text/plain", "Hi! Ich bin der LoRa OTA Empfänger!");
		});

	server.on("/data", []() {
		String sbuf = String(buf);
		sbuf.replace("\r\n","<br/>");
		
		server.send(200, "text/html", sbuf.c_str());
	});

	ElegantOTA.onEnd([](bool success) {
		if (isSerial) {
			if (success) {
				Serial.println("Update completed successfully.");
			}
			else {
				Serial.println("Update failed!");
			}
		}
		delay(2000);
		ESP.restart();
	});

	ElegantOTA.begin(&server); // Start ElegantOTA

	server.begin();
	MDNS.addService("http", "tcp", 80);

	if (isSerial) {
		Serial.println("HTTP server started");
	}

}
#endif