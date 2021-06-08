#include <Servo.h> 
Servo servo1; 
const int flexpin = A0; 
void setup () 
{ 
 Serial.begin(9600); 
 servo1.attach(9); 
} 
void loop () 
{ 
 int flexposition;  
 flexposition = analogRead(flexpin);
 Serial.print("sensor: "); 
 Serial.print(flexposition); 
 if (flexposition > 800)// you can change this value according to your sensor reading
 {
  servo1.write(0);
  Serial.print(" servo:"); 
 Serial.println(0); 
  }
  else
  {
    servo1.write(90);
    Serial.print(" servo:"); 
    Serial.println(90); 
  }
 
} 
