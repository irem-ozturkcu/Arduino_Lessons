int ledler[]={7,6,5,4};  //ledlerin pin girişlerini tanımlıyoruz
int i,j;   //döngülerde kullanacağımız değişkenlerimizi tanımlıyoruz

void setup() {
  for(i=0; i<4; i++){
    pinMode(ledler[i],OUTPUT);    //tek tek yazmak yerine döngü ile pin tanımlamalarımızı yapıyoruz
  }

}

void loop() {
  for(i=0; i<4; i++){
    digitalWrite(ledler[i],HIGH);
    delay(200);                       //ledler baştan sona doğru sıra sıra yanıp söner
    digitalWrite(ledler[i],LOW);
  }

  for(j=3; j>=0; j--){
    digitalWrite(ledler[j],HIGH);
    delay(200);                       //ledler sondan başa doğru sıra sıra yanıp söner
    digitalWrite(ledler[j],LOW);
  }

}
