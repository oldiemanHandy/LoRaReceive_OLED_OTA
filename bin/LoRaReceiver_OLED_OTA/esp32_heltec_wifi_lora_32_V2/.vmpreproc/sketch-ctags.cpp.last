#include <arduino.h>
#line 1 "L:\\ESP32\\LoRaReceiver_OLED_OTA\\LoRaReceiver_OLED_OTA.ino"
#line 1 "L:\\ESP32\\LoRaReceiver_OLED_OTA\\LoRaReceiver_OLED_OTA.ino"
#include <OLEDDisplay.h>
#include <OLEDDisplayFonts.h>
#include <OLEDDisplayUi.h>

#include <SSD1306I2C.h>
#include <SSD1306Spi.h>
#include <SSD1306Wire.h>
#include <Wire.h>
#include "src/Define.h"
#include <SPI.h>
#include <LoRa.h>
#include <SSD1306.h>
#include <WiFi.h>
#include "src/WiFi_OTA.h"
#include <iostream>
#include <sstream>
#include <string>
#include <vector>






#define OLED_SDA    4
#define OLED_SCL    15
#define OLED_RST    16










#define SCK     5    
#define MISO    19   
#define MOSI    27   

#define SS      18
#define RST     14
#define DI0     26
#define BAND    869E6


#line 47 "L:\\ESP32\\LoRaReceiver_OLED_OTA\\LoRaReceiver_OLED_OTA.ino"
const char* ssid = "SHEES-BOX";
const char* pwd = "21121950SHEES";
const char* host = "esp32-lora-receive";

SSD1306  display(0x3c, OLED_SDA, OLED_SCL);
extern WebServer server;

uint64_t id;
char lip[17];       
bool isSerial = false;
char buf[200];

void setup() {
    pinMode(25, OUTPUT); 

    pinMode(OLED_RST, OUTPUT);
    digitalWrite(OLED_RST, LOW);    
    delay(50);
    digitalWrite(OLED_RST, HIGH);

  display.init();
  display.flipScreenVertically();
  display.setFont(ArialMT_Plain_10);
  display.setTextAlignment(TEXT_ALIGN_LEFT);
  
  Serial.begin(115200);
  Serial.begin(115200);
  if (Serial.availableForWrite()) {
      isSerial = true;
      Serial.println("\nLora Receive OTA");
  }
  delay(1000);
 
  display.drawString(5,5,"LoRa Receiver"); 
  display.display();

  SPI.begin(SCK, MISO, MOSI, SS);
  LoRa.setPins(SS,RST,DI0);
  
  if (!LoRa.begin(BAND)) {
    display.drawString(5,25,"Starting LoRa failed!");
    while (1);
  }
  LoRa.setSyncWord(0x12); 
  Serial.println("LoRa Initial OK!");
  display.drawString(5,25,"LoRa Initializing OK!");
  display.display();
  delay(2000);

  id = ESP.getEfuseMac();
  Serial.println(id);

  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, pwd);
  while (WiFi.status() != WL_CONNECTED) {
      delay(1000);
      Serial.print(".");
  }
  sprintf(lip, "%s", WiFi.localIP().toString().c_str());
  Serial.printf("Connected to WiFi, IP: %s\n", lip);

  wifi_ota_setup();
}

void loop() {
    server.handleClient();
    
  int packetSize = LoRa.parsePacket();
  if (packetSize) {
    
    Serial.print("Received packet. ");
    display.clear();
    display.setFont(ArialMT_Plain_10);
    display.drawString(3, 3, "Received: RSSI ");
    display.drawString(90, 3, (String)LoRa.packetRssi());
    display.display();

    
    while (LoRa.available()) {
        String data = LoRa.readString();
        Serial.println(data);
        int wo = data.indexOf(":");
        if (wo != -1) {
            String adr = "Sender: " + data.substring(0, wo);
            String ds = data.substring(wo + 2);
            display.drawString(3, 18, adr);
            display.drawString(3, 33, ds);
            display.display();
            String decoded = decode(adr, ds);
            Serial.print(decoded);
            strcpy(buf, decoded.c_str());
        }
    }
    
    Serial.print(" with RSSI ");
    Serial.println(LoRa.packetRssi());
    display.drawString(3, 50, String(lip));
    display.display();

    digitalWrite(25, HIGH);   
    delay(1000);                       
    digitalWrite(25, LOW);    
    delay(1000);                       
  }
}

std::vector<std::string> split(const std::string& str, char delimiter) {
    std::vector<std::string> tokens;
    std::stringstream ss(str);
    std::string item;

    while (std::getline(ss, item, delimiter)) {
        tokens.push_back(item);
    }

    return tokens;
}

String decode(String adr, String ds) {
    char xbuf[200];
	String decoded = adr + "\r\n";
	std::vector<std::string> lines = split(ds.c_str(), '|');
    for (const auto& line : lines) {
		std::vector<std::string> parts = split(line, ':');
        if( parts[0] == "T") {
			sprintf(xbuf, "Temperature: %s &deg;C\r\n", parts[1].c_str());
			decoded += xbuf;
        } else if (parts[0] == "H") {
			sprintf(xbuf, "Humidity: %s %%\r\n", parts[1].c_str());
			decoded += xbuf;
        } else if (parts[0] == "P") {
			sprintf(xbuf, "Pressure: %s hPa\r\n", parts[1].c_str());
			decoded += xbuf;
        } else if (parts[0] == "A") {
			sprintf(xbuf, "Altitude: %s m\r\n", parts[1].c_str());
			decoded += xbuf;
        } else {
			sprintf(xbuf, "Counter: %s\r\n", parts[0].c_str());
			decoded += xbuf;
        }
	}
	return decoded;
}






