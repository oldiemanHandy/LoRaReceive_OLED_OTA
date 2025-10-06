# 1 "L:\\ESP32\\LoRaReceiver_OLED_OTA\\LoRaReceiver_OLED_OTA.ino"
# 1 "L:\\ESP32\\LoRaReceiver_OLED_OTA\\LoRaReceiver_OLED_OTA.ino"
# 2 "L:\\ESP32\\LoRaReceiver_OLED_OTA\\LoRaReceiver_OLED_OTA.ino"
# 3 "L:\\ESP32\\LoRaReceiver_OLED_OTA\\LoRaReceiver_OLED_OTA.ino"
# 4 "L:\\ESP32\\LoRaReceiver_OLED_OTA\\LoRaReceiver_OLED_OTA.ino"

# 6 "L:\\ESP32\\LoRaReceiver_OLED_OTA\\LoRaReceiver_OLED_OTA.ino"
# 7 "L:\\ESP32\\LoRaReceiver_OLED_OTA\\LoRaReceiver_OLED_OTA.ino"
# 8 "L:\\ESP32\\LoRaReceiver_OLED_OTA\\LoRaReceiver_OLED_OTA.ino"
# 9 "L:\\ESP32\\LoRaReceiver_OLED_OTA\\LoRaReceiver_OLED_OTA.ino"
# 10 "L:\\ESP32\\LoRaReceiver_OLED_OTA\\LoRaReceiver_OLED_OTA.ino"
# 11 "L:\\ESP32\\LoRaReceiver_OLED_OTA\\LoRaReceiver_OLED_OTA.ino"
# 12 "L:\\ESP32\\LoRaReceiver_OLED_OTA\\LoRaReceiver_OLED_OTA.ino"
# 13 "L:\\ESP32\\LoRaReceiver_OLED_OTA\\LoRaReceiver_OLED_OTA.ino"
# 14 "L:\\ESP32\\LoRaReceiver_OLED_OTA\\LoRaReceiver_OLED_OTA.ino"
# 15 "L:\\ESP32\\LoRaReceiver_OLED_OTA\\LoRaReceiver_OLED_OTA.ino"
# 16 "L:\\ESP32\\LoRaReceiver_OLED_OTA\\LoRaReceiver_OLED_OTA.ino"
# 17 "L:\\ESP32\\LoRaReceiver_OLED_OTA\\LoRaReceiver_OLED_OTA.ino"
# 18 "L:\\ESP32\\LoRaReceiver_OLED_OTA\\LoRaReceiver_OLED_OTA.ino"
# 19 "L:\\ESP32\\LoRaReceiver_OLED_OTA\\LoRaReceiver_OLED_OTA.ino"
# 47 "L:\\ESP32\\LoRaReceiver_OLED_OTA\\LoRaReceiver_OLED_OTA.ino"

# 47 "L:\\ESP32\\LoRaReceiver_OLED_OTA\\LoRaReceiver_OLED_OTA.ino"
const char* ssid = "SHEES-BOX";
const char* pwd = "21121950SHEES";
const char* host = "esp32-lora-receive";

SSD1306 display(0x3c, 4, 15);
extern WebServer server;

uint64_t id;
char lip[17];
bool isSerial = false;
char buf[200];

void setup() {
    pinMode(25, 0x03);

    pinMode(16, 0x03);
    digitalWrite(16, 0x0);
    delay(50);
    digitalWrite(16, 0x1);

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

  SPI.begin(5, 19, 27, 18);
  LoRa.setPins(18,14,26);

  if (!LoRa.begin(869E6)) {
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

  WiFi.mode(WIFI_MODE_STA);
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

    digitalWrite(25, 0x1);
    delay(1000);
    digitalWrite(25, 0x0);
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



