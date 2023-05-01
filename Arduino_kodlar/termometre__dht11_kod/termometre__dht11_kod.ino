#include <DHT.h> // DHT kütüphanesi eklendi.
#include <LiquidCrystal.h> //LCD Kütüphanesi eklendi.
  
#define dhtPin 9 // Sensörün bağlandığı Pin
#define dhtModel DHT11 //Kullanılan sensörün modeli (DHT11)
 
DHT dht(dhtPin, dhtModel); //DHT kütüphanesinde 'dht' adında nesne oluşturuldu.
LiquidCrystal lcd(2, 3, 4, 5, 6, 7); //RS,EN,DB4,DB5,DB6,DB7
 
  
void setup() {
 
 lcd.begin(16,2); //LCD’nin özellikleri 16x2 boyutlarında olduğunu belirttik.
 dht.begin(); // dht sensörünü başlattık.
 
}
 
void loop() {
 
 float sicaklik = dht.readTemperature(); // Sensörden sıcaklık değeri okundu.
 int nem = dht.readHumidity(); //Sensörden Nem değeri okundu.
 
 lcd.clear();
 
 lcd.setCursor(0,0); // Sicaklik ve Nem değerleri LCD'ye yazdırıldı.
 lcd.print("Sicaklik: ");
 lcd.print(sicaklik);
 lcd.print(" C");
 
 lcd.setCursor(0,1);
 lcd.print("Nem: %");
 lcd.print(nem);
 
 delay(2000); // 2 sn boyunca bekle
 
}
