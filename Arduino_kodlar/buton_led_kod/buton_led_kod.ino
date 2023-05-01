#define buton 4    //pin giriş tanımlamaları yapılır
#define led 5

int buton_degeri=0;  //buton durumunun değer ataması yapılır başta kapalı olarak kabul edilir

void setup() {
  pinMode(buton,INPUT);  //pinlerin özellikleri tanımlanır. Buton giriş verisi sağladığı için INPUT olur
  pinMode(led,OUTPUT);

}

void loop() {
  buton_degeri=digitalRead(buton);  //butonun pindeki durum değeri okunur
  if(buton_degeri==1){              //değere göre if döngüsü çalışır
    digitalWrite(led,HIGH);
  }
  else{
    digitalWrite(led,LOW);
  }

}
