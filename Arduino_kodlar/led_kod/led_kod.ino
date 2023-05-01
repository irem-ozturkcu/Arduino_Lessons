#define led 6
//int led=6;  olarak da kullanılabilir

void setup() {
  pinMode(led,OUTPUT);   //ledin çıkış vereceğini bildiriyoruz

}

void loop() {
  digitalWrite(led,HIGH);   //led yanar
  delay(1000);
  digitalWrite(led,LOW);    //led söner
  delay(1000);

}
