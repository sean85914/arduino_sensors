#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BMP085_U.h>

// Sensor id: 10085
Adafruit_BMP085_Unified bmp = Adafruit_BMP085_Unified(10085);

/*
 Connect it up
 VDD <-> 3.3V
 GND <-> GND
 SCL <-> A5
 SDA <-> A4
 */
 
void setup() {
  Serial.begin(9600);
  if(!bmp.begin())
  {
    /* There was a problem detecting the BMP085 ... check your connections */
    Serial.print("Ooops, no BMP085 detected ... Check your wiring or I2C ADDR!");
    while(1);
  }
  
}

void loop() {
  sensors_event_t event;
  bmp.getEvent(&event);
  if(event.pressure)
  {
    Serial.println(event.pressure); // Unit: hPa
  }
  else
  {
    Serial.println("Sensor error!");
  }
  delay(500);
  /*
   * You can also get the temperature information by calling
   * bmp.getTemperature(float &);
   */
}
