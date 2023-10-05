#define rele 13 // Atribui o pino 2 ao nome "rele"

void setup() {

  Serial.begin(9600);        // Inicia a comunicação serial

  pinMode(rele,OUTPUT);      // Define o pino 13 como saída 
  digitalWrite(rele, HIGH);  // Inicia com a lampada desligada
}

void loop() {

  if (Serial.available() > 0){      // Monitora a presença de dados na porta serial

    char leitura = Serial.read();  // Lê os dados na porta serial

    if (leitura == 'D' || leitura == 'd'){  // Codição para Desligar
      digitalWrite(rele, LOW);              // Liga a lampada
      Serial.println("Lampada desligada");  // Mostra que está desligado na serial
    }
    else if (leitura == 'L' || leitura == 'l') { // Codição para Ligar
      digitalWrite(rele, HIGH);                  // Desliga a lampada
      Serial.println("Lampada ligada");          // Mostra que está ligado na serial
    }
  }
}
