int buzzer = 13; 
int sensorPin = 7;  
int sensor = HIGH;  

void setup() {
  pinMode(buzzer, OUTPUT); 
  pinMode(sensorPin, INPUT);
  Serial.begin(9600); 
  
}

void loop() {
  sensor = digitalRead(sensorPin);
  if (sensor== LOW) 
  {
    digitalWrite(buzzer, HIGH);
  }
  else                         
  {                               
    digitalWrite(buzzer, LOW);  
  }
}
