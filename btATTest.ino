#include <SoftwareSerial.h> 

#define __MEGA2560__ 1                   //0: Uno, 1: Mega 2560

#if __MEGA2560__
#define mySerial Serial3
#else
int blueTx=2;   
int blueRx=3;   
SoftwareSerial mySerial(blueTx, blueRx); 
#endif

#define BAUDRATE 9600                 //select 9600 or 115200 w.r.t module

void setup() 
{
  Serial.begin(BAUDRATE);   
  mySerial.begin(BAUDRATE); 
}
void loop()
{
  if (mySerial.available()) {       
    Serial.write(mySerial.read());  
  }
  if (Serial.available()) {         
    mySerial.write(Serial.read()); 
  }
}

