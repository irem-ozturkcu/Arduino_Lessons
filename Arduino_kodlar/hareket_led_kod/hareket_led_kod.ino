int pirPin = 5;
int ledPin = 8;
int hareket;

void setup() {
pinMode(ledPin,OUTPUT);
pinMode(pirPin, INPUT);
}

void loop() {
hareket = digitalRead(pirPin);

if(hareket == HIGH){
digitalWrite(8,HIGH);

}else{
digitalWrite(8,LOW);
delay(100);
}
}
