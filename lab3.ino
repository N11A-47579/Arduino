unsigned long aktualnyCzas = 0;
unsigned long zapamietanyCzas = 0;
unsigned long roznicaCzasu = 0;

void setup() {
  for (int i = 2; i < 11; i++) {
    pinMode(i, OUTPUT);
  }
  for (int i = 11; i < 14; i++) {
    pinMode(i, OUTPUT);
    pinMode(i, OUTPUT);
    pinMode(i, OUTPUT);
    digitalWrite(i, HIGH);
    digitalWrite(i, HIGH);
    digitalWrite(i, HIGH);
  }

}
void loop() {
  aktualnyCzas = millis();
  roznicaCzasu = aktualnyCzas - zapamietanyCzas;
  if (roznicaCzasu >= 1000UL) {
    zapamietanyCzas = aktualnyCzas;
    for (int i = 2; i < 11; i++) {
      digitalWrite(i, HIGH);
    }
    digitalWrite(11, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
  }
  aktualnyCzas = millis();
  roznicaCzasu = aktualnyCzas - zapamietanyCzas;
  if (roznicaCzasu >= 1000UL) {
    zapamietanyCzas = aktualnyCzas;
    for (int i = 2; i < 11; i++) {
      digitalWrite(i, HIGH);
    }
    digitalWrite(11, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
  }
}
