
#define BLYNK_TEMPLATE_ID "TMPLBrn5eFAl"
#define BLYNK_TEMPLATE_NAME "LED"
#define BLYNK_AUTH_TOKEN "37heHqJqanHTZSbgYXeFRJTJ1u4tLT1P"

// Comment this out to disable prints and save space
#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp8266.h>


#include "SoftwareSerial.h"
SoftwareSerial mySerial(D5, D6);





const char b1 = D1;
const char b2 = D2;
const char b3 = D3;
const char b4 = D4;
const char b5 = D5;
const char b6 = D6;
const char b7 = D7;
const char b8 = D8;
bool pressed = false;

bool pressed_7 = false;

bool pressed_8= false;

bool b1v;
bool b2v;
bool b3v;
bool b4v;
bool b5v;
bool b6v;
bool b7v;
bool b8v;

void btn_read();
String msg = "";
//String s1;






// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "wifi";
char pass[] = "123456789";

BlynkTimer timer;
char auth[] = BLYNK_AUTH_TOKEN;

BLYNK_WRITE(V4)
{
  int value = param.asInt();
  Serial.println(value);
  if (value == 1)
  {
    Serial.print("hai");
    digitalWrite(D0, HIGH);


  }
  if (value == 0)
  {
    digitalWrite(D0, LOW);
  }
}

BLYNK_WRITE(V1) {
  String string = param.asStr();
  Serial.println(string);
   mySerial.print(string);
}





void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
   mySerial.begin(9600);
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);

   pinMode(b1, INPUT_PULLUP);
  pinMode(b2, INPUT_PULLUP);
  pinMode(b3, INPUT_PULLUP);
  pinMode(b4, INPUT_PULLUP);
  pinMode(b5, INPUT_PULLUP);
  pinMode(b6, INPUT_PULLUP);
  pinMode(b7, INPUT_PULLUP);
  pinMode(b8, INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:
  Blynk.run();
//  Blynk.virtualWrite(V2, "1");
//  Blynk.logEvent("alert2", "Afternoon tablet");

  Blynk.virtualWrite(V5, msg );
  btn_read();
  button_logic();
}



void button_logic()
{
  if (b1v == pressed && b2v != pressed && b3v != pressed && b4v != pressed && b5v != pressed  && b6v != pressed   /* && b7v != pressed && b8v != pressed */) {
    Serial.print("a");
    msg = msg + "a";
//    Firebase.setString(firebaseData, "/mine/labour/temp", "a");
    delay(1000);

  }

  else if (b1v == pressed && b2v != pressed && b3v == pressed && b4v != pressed && b5v != pressed  && b6v != pressed  /* && b7v != pressed && b8v != pressed */ ) {
    Serial.print("b");
    msg = msg + "b";
    delay(1000);

  }
  else if (b1v == pressed && b2v == pressed && b3v != pressed && b4v != pressed && b5v != pressed  && b6v != pressed  /* && b7v != pressed && b8v != pressed */ ) {
    Serial.print("c");
    msg = msg + "c";
    delay(1000);

  }
  else if (b1v == pressed && b2v == pressed && b3v != pressed && b4v == pressed && b5v != pressed  && b6v != pressed /* && b7v != pressed && b8v != pressed */ ) {
    Serial.print("d");
    msg = msg + "d";
    delay(1000);

  }
  else if (b1v == pressed && b2v != pressed && b3v != pressed && b4v == pressed && b5v != pressed  && b6v != pressed /* && b7v != pressed && b8v != pressed */ ) {
    Serial.print("e");
    msg = msg + "e";
    delay(1000);

  }
  else if (b1v == pressed && b2v == pressed && b3v == pressed && b4v != pressed && b5v != pressed  && b6v != pressed  /* && b7v != pressed && b8v != pressed */ ) {
    Serial.print("f");
    msg = msg + "f";
    delay(1000);

  }
  else  if (b1v == pressed && b2v == pressed && b3v == pressed && b4v == pressed && b5v != pressed  && b6v != pressed  /* && b7v != pressed && b8v != pressed */ ) {
    Serial.print("g");
    msg = msg + "g";
    delay(1000);

  }
  else if (b1v == pressed && b2v != pressed && b3v == pressed && b4v == pressed && b5v != pressed  && b6v != pressed /* && b7v != pressed && b8v != pressed */ ) {
    Serial.print("h");
    msg = msg + "h";
    delay(1000);
  }
  else if (b1v != pressed && b2v == pressed && b3v == pressed && b4v != pressed && b5v != pressed  && b6v != pressed  /* && b7v != pressed && b8v != pressed */) {
    Serial.print("i");
    msg = msg + "i";
    delay(1000);
  }
  else if (b1v != pressed && b2v == pressed && b3v == pressed && b4v == pressed && b5v != pressed  && b6v != pressed  /* && b7v != pressed && b8v != pressed */ ) {
    Serial.print("j");
    msg = msg + "j";
    delay(1000);
  }
  else if (b1v == pressed && b2v != pressed && b3v != pressed && b4v != pressed && b5v == pressed  && b6v != pressed  /* && b7v != pressed && b8v != pressed */ ) {
    Serial.print("k");
    msg = msg + "k";
    delay(1000);
  }
  else if (b1v == pressed && b2v != pressed && b3v == pressed && b4v != pressed && b5v == pressed  && b6v != pressed /* && b7v != pressed && b8v != pressed */ ) {
    Serial.print("l");
    msg = msg + "l";
    delay(1000);
  }
  else if (b1v == pressed && b2v == pressed && b3v != pressed && b4v != pressed && b5v == pressed  && b6v != pressed /* && b7v != pressed && b8v != pressed */ ) {
    Serial.print("m");
    msg = msg + "m";
    delay(1000);
  }
  else if (b1v == pressed && b2v == pressed && b3v != pressed && b4v == pressed && b5v == pressed  && b6v != pressed /* && b7v != pressed && b8v != pressed */) {
    Serial.print("n");
    msg = msg + "n";
    delay(1000);
  }
  else if (b1v == pressed && b2v != pressed && b3v != pressed && b4v == pressed && b5v == pressed  && b6v != pressed  /* && b7v != pressed && b8v != pressed */ ) {
    Serial.print("o");
    msg = msg + "o";
    delay(1000);
  }
  else if (b1v == pressed && b2v == pressed && b3v == pressed && b4v != pressed && b5v == pressed  && b6v != pressed  /* && b7v != pressed && b8v != pressed */ ) {
    Serial.print("p");
    msg = msg + "p";
    delay(1000);
  }
  else if (b1v == pressed && b2v == pressed && b3v == pressed && b4v == pressed && b5v == pressed  && b6v != pressed  /* && b7v != pressed && b8v != pressed */ ) {
    Serial.print("q");
    msg = msg + "q";
    delay(1000);
  }
  else if (b1v == pressed && b2v != pressed && b3v == pressed && b4v == pressed && b5v == pressed  && b6v != pressed /* && b7v != pressed && b8v != pressed */ ) {
    Serial.print("r");
    msg = msg + "r";
    delay(1000);
  }
  else if (b1v != pressed && b2v == pressed && b3v == pressed && b4v != pressed && b5v == pressed  && b6v != pressed  /* && b7v != pressed && b8v != pressed */ ) {
    Serial.print("s");
    msg = msg + "s";
    delay(1000);
  }
  else if (b1v != pressed && b2v == pressed && b3v == pressed && b4v == pressed && b5v == pressed  && b6v != pressed  /* && b7v != pressed && b8v != pressed */ ) {
    Serial.print("t");
    msg = msg + "t";
    delay(1000);
  }
  else if (b1v == pressed && b2v != pressed && b3v != pressed && b4v != pressed && b5v == pressed  && b6v == pressed  /* && b7v != pressed && b8v != pressed */) {
    Serial.print("u");
    msg = msg + "u";
    delay(1000);
  }
  else if (b1v == pressed && b2v != pressed && b3v == pressed && b4v != pressed && b5v == pressed  && b6v == pressed  /* && b7v != pressed && b8v != pressed */ ) {
    Serial.print("v");
    msg = msg + "v";
    delay(1000);
  }
  else if (b1v != pressed && b2v == pressed && b3v == pressed && b4v == pressed && b5v != pressed  && b6v == pressed  /* && b7v != pressed && b8v != pressed */ ) {
    Serial.print("w");
    msg = msg + "w";
    delay(1000);
  }
  else if (b1v == pressed && b2v == pressed && b3v != pressed && b4v != pressed && b5v == pressed  && b6v == pressed /* && b7v != pressed && b8v != pressed */ ) {
    Serial.print("x");
    msg = msg + "x";
    delay(1000);
  }
  else if (b1v == pressed && b2v == pressed && b3v != pressed && b4v == pressed && b5v == pressed  && b6v == pressed  /* && b7v != pressed && b8v != pressed */ ) {
    Serial.print("y");
    msg = msg + "y";
    delay(1000);
  }
  else if (b1v == pressed && b2v != pressed && b3v != pressed && b4v == pressed && b5v == pressed  && b6v == pressed /* && b7v != pressed && b8v != pressed */ ) {
    Serial.print("z");
    msg = msg + "z";
    delay(1000);
  }


  if(b7v == pressed_7){
    Serial.println("msg is =");
    Serial.println(msg);
   
    
  }
//  if(b8v == pressed_8){
//    msg="";
//  }


  
}

void btn_read() {
  b1v = digitalRead(b1);
  b2v = digitalRead(b2);
  b3v = digitalRead(b3);
  b4v = digitalRead(b4);
  b5v = digitalRead(b5);
  b6v = digitalRead(b6);
  b7v = digitalRead(b7);
  b8v = digitalRead(b8);

  delay(1500);
 
}
