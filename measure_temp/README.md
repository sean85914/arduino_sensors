# Use Arduino + DS18B20 to measure temperature
## Get the library
[Github repo](https://github.com/milesburton/Arduino-Temperature-Control-Library.git)  
Import the library to your Arduino IDE

## OneWire library
You may also need the OneWire library, download here
[Download OneWire library](https://www.arduinolibraries.info/libraries/one-wire "OneWire")
## Upload the code
Upload script/temperature/temperature.ino to your Arduino
## Connect it up
DS18B20 data pin (the middle one) connect to Arduino D2 pin  
VCC to Arduino 5V  
GND to Arduino GND
## Let's ROS
After you setup your Arduino and DS18B20  
In one terminal  
```
$ roscore
```
In the other  
```
$ rosrun measure_temp ard_serial.py
```
You may need to move package 'measure_temp' to your catkin_ws/src and run catkin_make if you want to use ROS
# Record Raspberry Pi CPU temperature
[Get CPU temp of your pi](https://www.raspberrypi.org/forums/viewtopic.php?t=34994 "Get CPU temperature of your RPi")  
Remember to run this code src/cpu_temp.py in your raspberry pi or you will get an error  
