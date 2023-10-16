const int botaoA = 2;  // O pino ao qual o botão A está conectado
const int botaoB = 3;  // O pino ao qual o botão B está conectado
#define LED1 4
#define LED2 5
#define LED3 6

void setup() {
  pinMode(botaoA, INPUT);  
  pinMode(botaoB, INPUT); 
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
}

void loop() {
  int estadoBotaoA = digitalRead(botaoA); 
  int estadoBotaoB = digitalRead(botaoB);

  // Verifica se o botão foi pressionado
  if (estadoBotaoA == HIGH && estadoBotaoB == LOW) {
	digitalWrite(LED1, HIGH);
    delay(300);
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, HIGH);
    delay(300);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, HIGH);
    delay(300);
    digitalWrite(LED3, LOW);
     delay(300);
  } 
  else if (estadoBotaoA == LOW && estadoBotaoB == HIGH) {
	digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, HIGH);
    delay(500);
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    delay(500);
  }
  else{
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
  }
  delay(100);  // Adiciona um pequeno atraso para evitar leituras rápidas e instáveis
}
