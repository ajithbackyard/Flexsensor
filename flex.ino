#include <Servo.h> 
Servo servo1; 
const int flexpin = A0; 
void setup () 
{ 
 Serial.begin(115200); 
 servo1.attach(9); 
} 
void loop () 
{ 
 int flexposition;  
 flexposition = analogRead(flexpin);
 Serial.print("sensor: "); 
 Serial.print(flexposition); 
 if (flexposition > 800)
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
