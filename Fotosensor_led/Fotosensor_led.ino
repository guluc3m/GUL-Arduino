//Constants
const int pResistor = A0; // Photoresistor at Arduino analog pin A0
const int ledPin=9;       // Led pin at Arduino pin 9

//Variables
int value;          // Store value from photoresistor (0-1023)

void setup(){
 pinMode(ledPin, OUTPUT);  // Set lepPin - 9 pin as an output
 pinMode(pResistor, INPUT);// Set pResistor - A0 pin as an input (optional)
Serial.begin(9600);
}

void loop(){
  value = analogRead(pResistor);
  Serial.println(value);
  //You can change value "25"
  if (value > 100){
    digitalWrite(ledPin, LOW);  //Turn led off
  }
  else{
    digitalWrite(ledPin, HIGH); //Turn led on
  }

  delay(50); //Small delay
}
