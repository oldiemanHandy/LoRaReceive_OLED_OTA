// WiFi_OTA.h

#ifndef _WIFI_OTA_h
#define _WIFI_OTA_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif
#include <WiFi.h>
//#include <NetworkClient.h>
#include <WebServer.h>
#include <ESPmDNS.h>
#include <ElegantOTA.h>

extern bool isSerial;
extern char buf[200];
extern WebServer server;

void wifi_ota_setup();


#endif

