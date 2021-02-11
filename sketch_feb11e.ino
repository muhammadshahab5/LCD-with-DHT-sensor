#include <DHT.h>
#include <DHT_U.h>
#include <LiquidCrystal.h>

DHT dht(A0, DHT11);
LiquidCrystal lcd(2,3,4,5,6,7);
int sensor = A0;
void setup()
{
  lcd.begin(16,2);
  dht.begin();
}

void loop()
{
  float chk = dht.readTemperature(true);                                                                                                               
  
  lcd.setCursor(0,0);
 lcd.print("temp:");
 lcd.print(chk);
  delay(1000);
  float var = dht.readHumidity();
  
  lcd.setCursor(0,1);
  lcd.print("Humidity:");
  lcd.print(var);
  delay(1000);
}
