#include <DHT22.h>
//define pin data
#define pinDATAone 7 // SDA, or almost any other I/O pin
#define pinDATAtwo 8

DHT22 dhtPINone(pinDATAone);
DHT22 dhtPINtwo(pinDATAtwo);

void setup() {
  Serial.begin(9600);
  Serial.println("Board connected");
}

void loop() {
  Serial.println(dhtPINone.debug()); //optionnal

  float t1 = dhtPINone.getTemperature();
  float h1 = dhtPINone.getHumidity();

  if (dhtPINone.getLastError() != dhtPINone.OK) {
    Serial.print("last error :");
    Serial.println(dhtPINone.getLastError());
  }

  Serial.print("h1=");Serial.print(h1,1);Serial.print("\t");
  Serial.print("t1=");Serial.println(t1,1);
  

  Serial.println(dhtPINtwo.debug()); //optionnal

  float t2 = dhtPINtwo.getTemperature();
  float h2 = dhtPINtwo.getHumidity();

  if (dhtPINtwo.getLastError() != dhtPINtwo.OK) {
    Serial.print("last error :");
    Serial.println(dhtPINtwo.getLastError());
  }

  Serial.print("h2=");Serial.print(h2,1);Serial.print("\t");
  Serial.print("t2=");Serial.println(t2,1);
  delay(2000); //Collecting period should be : >1.7 second
}
