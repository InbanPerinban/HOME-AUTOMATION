
Conversation opened. 2 messages. All messages read.

Skip to content
Using Gmail with screen readers
10 of 4,858
(no subject)

Sudharsan M <sudharsan.m23@gmail.com>
Attachments
Thu, 7 Sept, 22:27 (19 hours ago)
to me


 One attachment
  • Scanned by Gmail

To

---------- Forwarded message ---------
From: Sudharsan M <sudharsan.m23@gmail.com>
Date: Thu 7 Sep, 2023, 10:27 PM
Subject:
To: PERINBAN M <inbanperinban@gmail.com>



Led Code.txt (1K)
#define BLYNK_TEMPLATE_ID "TMPL3NDJojAvO"
#define BLYNK_TEMPLATE_NAME "ON"
#define BLYNK_AUTH_TOKEN "BBURH46xkm2KPAhHALOEdLvYalXr2TMZ"

#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>  
#include <BlynkSimpleEsp8266.h>
 

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "R";  // Enter your Wifi Username
char pass[] = "12345678";  // Enter your Wifi password

int ledpin = D4;
void setup()
{     
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);    
  pinMode(ledpin,OUTPUT);
}

void loop()
{
  Blynk.run(); 
}
Led Code.txt
Displaying Led Code.txt.
