#define LED_FLASH 4

void setup() {

  pinMode(LED_FLASH, OUTPUT);

  // Acende o LED
  digitalWrite(LED_FLASH, HIGH);

  // Espera 5 segundos
  delay(5000);

  // Apaga o LED
  digitalWrite(LED_FLASH, LOW);
}

void loop() {

}