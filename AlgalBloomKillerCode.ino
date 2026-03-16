#include <Servo.h>
const int triggerPin1 = 3; //This is the name of the pin connected to the first ultrasonic sensor. 
const int triggerPin2 = 5; //For the second ultrasonic sensor
const int servo = 9;
int delayTime = 15;

Servo myServo; //Create a servo object
int pos = 0; //Variable to store the servo position



void setup() { // put your setup code here, to run once:
 myServo.attach(9); //Attach servo to pin 9
 pinMode(triggerPin1, OUTPUT);
 pinMode(triggerPin2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(triggerPin1, HIGH);
 digitalWrite(triggerPin2, HIGH);

for (pos = 0;pos <= 180; pos += 1){ //Move to 180 degrees
   myServo.write(pos);
     delay(delayTime); //Wait for servo to reach position
 }
 //Move arm left
 for(pos = 180; pos >= 0; pos -= 1){ //Move back to 0 degrees
   myServo.write(pos);
     delay(delayTime); //Wait for servo to reach position
 }

}
