
#include <ESP8266WiFi.h> // includes WiFi library
#include <ESP8266WebServer.h> // includes sever library

ESP8266WebServer server;

char* ssid = "S9";//"SUDEEP";//
char* password = "vineeth123";//"8281173664"; //
uint8_t pin_led = 2;
uint8_t pinRelay = 13;


void setup() {
  pinMode(pin_led, OUTPUT);
  //pinMode(pinRelay, OUTPUT);
  WiFi.begin(ssid, password);
  Serial.begin(115200);
  while(WiFi.status()!=WL_CONNECTED){
    Serial.print(".");
    delay(500);
  }
  Serial.println("");
  Serial.print("IP Address: ");
  Serial.print(WiFi.localIP());

  server.on("/",[](){server.send(200, "text/plain","Hello World!");});
  server.on("/toggle", toggleLED);
  server.begin();  
}

void loop() {
  server.handleClient(); 
}

void toggleLED()
{
  digitalWrite(pin_led, !digitalRead(pin_led));
  digitalWrite(pinRelay, !digitalRead(pinRelay));  
  server.send(204, "");
}
