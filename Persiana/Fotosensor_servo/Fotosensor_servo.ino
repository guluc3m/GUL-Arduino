#include <Servo.h>;

const int pResistor = A0;// Photoresistor at Arduino analog pin A0
 int pinLED = 8;
Servo servo;              // Servo declaration for later use

//Variables
int value;          // Store value from photoresistor (0-1023)

void setup(){
  
 pinMode(pResistor, INPUT);// Set pResistor - A0 pin as an input
 pinMode(pinLED, OUTPUT); // Set the LED as an output

 servo.attach(9); //Servo attached to pin 9 digital
}

void loop(){
  value = analogRead(pResistor);
  
  //You can change value "25"
  if (value < 50 and value >25){ //There is MEDIUM LIGHT
    servo.write(100);  //Turn LED off
    digitalWrite(pinLED,HIGH); 
  }
  else if(value < 25){ // There is ALMOST NO LIGHT
     servo.write(180);
    digitalWrite(pinLED,HIGH); 
  }
  else{
     servo.write(0); // There is HIGH LIGHT
    digitalWrite(pinLED,LOW); 
  }

  delay(50); //Small delay to save 

  
  
}
