const int LDR_PIN = 15;
const int LED_PIN_AZUL = 2;
const int LED_PIN_AMARELO = 4; 
const int LED_PIN_VERMELHO = 5;

int ldrVal;

void setup() {
  Serial.begin(9600);
  pinMode(LED_PIN_AZUL, OUTPUT);
  pinMode(LED_PIN_AMARELO, OUTPUT);
  pinMode(LED_PIN_VERMELHO, OUTPUT);

  // put your setup code here, to run once:

}

void loop() {
  ldrVal = analogRead(LDR_PIN);
  if (ldrVal <= 500) {
  digitalWrite(LED_PIN_AZUL, HIGH);
  } else {
  digitalWrite(LED_PIN_AZUL, LOW);
  }

  if (ldrVal <= 300) {
  digitalWrite(LED_PIN_AMARELO, HIGH);
  } else {
  digitalWrite(LED_PIN_AMARELO, LOW);
  }

  if (ldrVal <= 150) {
  digitalWrite(LED_PIN_VERMELHO, HIGH);
  } else {
  digitalWrite(LED_PIN_VERMELHO, LOW);
  }

  Serial.println(ldrVal);
  delay(100);

}
