#include <Servo.h>

Servo myservo;  // create servo object to control a servo

int pos=0;    // variable to read the value from the analog pin

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  int i=1000;
  myservo.write(0);
  
  myservo.write(0);
  
  myservo.write(10);
  delay(i);
  myservo.write(90);
  delay(i);
  myservo.write(180);
  delay(i);
  myservo.write(90);
  delay(i);
  myservo.write(0);// tell servo to go to position in variable 'pos'
    delay(i);                       // waits 15ms for the servo to reach the position
  }
