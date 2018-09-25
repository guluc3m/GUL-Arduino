#include <Servo.h>;

const int pResistor = A0; // Photoresistor at Arduino analog pin A0
Servo servo;              // Servo declaration for later use

//Variables
int value;          // Store value from photoresistor (0-1023)

void setup(){
 pinMode(pResistor, INPUT);// Set pResistor - A0 pin as an input (optional)
 servo.attach(1); //Servo attached to pin 1 digital
}

void loop(){
  value = analogRead(pResistor);
  
  //You can change value "25"
  if (value < 50 and value >25){
    servo.write(100);  //Turn le)d off
  }
  else if(value < 25){
     servo.write(180);
  }
  else{
     servo.write(0);
  }

  delay(50); //Small delay
}
