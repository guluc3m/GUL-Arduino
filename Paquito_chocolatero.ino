#include <EEPROM.h>;

unsigned int const mindir =0;
unsigned int const maxdir =1;

unsigned int sensorPin = A0;
unsigned int sensorValue =0;

unsigned int cMin = 1024; 
unsigned int cMax = 0;
int mapSensor;

void setup() {
  pinMode(sensorPin,INPUT);
  Serial.begin(9600);
}

void loop() {
 sensorValue = analogRead(sensorPin);
 setMin(sensorValue);
 setMax(sensorValue);
 mapSensor = map(sensorValue, getMin(), getMax(), 0, 100); 
 Serial.println(mapSensor);
 Serial.print("Min ");
 Serial.println(cMin);
 Serial.print("Max ");
 Serial.println(cMax);
 delay(1000);
}

void setMin(int value){
  if (value < cMin){
    Serial.println("Entra");
    cMin = value;
    EEPROM.update(mindir, cMin);
  }
   
}

void setMax(int value){
  if (value > cMax){
    cMax = value;
    EEPROM.update(maxdir, cMax); 
  }
   
}

int getMin(){
 return EEPROM.read(mindir);
   
}

int getMax(){
 return EEPROM.read(maxdir); 
}


