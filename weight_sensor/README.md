# Use 5kG load cell and HX711 ADC to measure the weight
## Assemble your scale like this
![](https://github.com/seanNCTU/arduino_sensors/blob/master/weight_sensor/img/scale.jpg)
## Connect it up!
### Load cell <-> HX711
Red <-> E+  
Black <-> E-  
Green <-> A+(B+)  
White <-> A-(B-)  

Notice to use the correct side to put your stuff on your load cell  
There should be an upward arrow, which show you which side to use  
If not, don't worry! Just upload the source code and press the cell and observe the result  

### HX711 <-> Arduino
VCC <-> 5V  
GND <-> GND  
DT, SCK depend on the code you upload, by default:  
DT <-> A1  
SCK <-> A0  

## Get the library
Download the library .zip from this repo
[Github link](https://github.com/bogde/HX711)

## Let's get do it!
In Arduino IDE, import library which you just download  
Open File >> Example >> HX711-master >> HX711SerialBegin and revise the following  
...  
    scale.set_scale();  
...  
Upload to your code to Arduino  
### Calibrate the scale
You should get something with known weight precisely, e.g., weights  
Put the object onto the scale, and devide the result by the known weight  
This is the value you should call set_scale() with  

## Filtering
I use one-dimension Kalamn filter with no command term to filter my data  
Model:  
State:   x_t = x_t-1 + noise noise~ N(0, r)  
Measure: z_t = z_t-1 + noise noise~ N(0, q)  

