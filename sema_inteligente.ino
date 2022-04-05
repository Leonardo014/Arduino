// C++ code
//
void setup()
{
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  while (digitalRead(2) == 1) {
    while (digitalRead(2) < HIGH) {
      // Sinal verde para veículos
      digitalWrite(13, HIGH);
      // Sinal vermelho para pedestres
      digitalWrite(6, HIGH);
      delay(15000); // Wait for 15000 millisecond(s)
      digitalWrite(13, LOW);
      // Sinal amarelo para veículos
      digitalWrite(12, HIGH);
      delay(500); // Wait for 500 millisecond(s)
      // Sinal vermelho intermitente para pedestres
      // sinalizando que o sinal verde ativará
      digitalWrite(6, LOW);
      delay(500); // Wait for 500 millisecond(s)
      digitalWrite(6, HIGH);
      delay(500); // Wait for 500 millisecond(s)
      digitalWrite(6, LOW);
      delay(500); // Wait for 500 millisecond(s)
      digitalWrite(6, HIGH);
      delay(500); // Wait for 500 millisecond(s)
      digitalWrite(6, LOW);
      delay(500); // Wait for 500 millisecond(s)
      digitalWrite(6, HIGH);
      delay(500); // Wait for 500 millisecond(s)
      digitalWrite(6, LOW);
      delay(500); // Wait for 500 millisecond(s)
      digitalWrite(6, HIGH);
      delay(500); // Wait for 500 millisecond(s)
      digitalWrite(12, LOW);
      digitalWrite(6, LOW);
      // Sinal vermelho para veículos
      digitalWrite(11, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(9, HIGH);
      // Sinal verde para pedestres
      digitalWrite(7, HIGH);
      // Sinal sonoro intermitente sinalizando que o
      // sinal verde para pedestres está ativado
      tone(5, 294, 1000); // play tone 50 (D4 = 294 Hz)
      delay(2500); // Wait for 2500 millisecond(s)
      tone(5, 294, 1000); // play tone 50 (D4 = 294 Hz)
      delay(2500); // Wait for 2500 millisecond(s)
      // Led vermelho para veículos 1/3 desativado
      digitalWrite(11, LOW);
      tone(5, 294, 1000); // play tone 50 (D4 = 294 Hz)
      delay(2500); // Wait for 2500 millisecond(s)
      tone(5, 294, 1000); // play tone 50 (D4 = 294 Hz)
      delay(2500); // Wait for 2500 millisecond(s)
      // Led vermelho para veículos 2/3 desativado
      digitalWrite(10, LOW);
      tone(5, 294, 1000); // play tone 50 (D4 = 294 Hz)
      delay(2500); // Wait for 2500 millisecond(s)
      // Sinal sonoro agudo por 2s sinalizando que o
      // sinal verde irá desativar para os pedestres
      tone(5, 932, 2000); // play tone 70 (A#5 = 932 Hz)
      // Led verde para pedestre intermitente
      // sinalizando que o vermelho ativará
      digitalWrite(7, LOW);
      delay(500); // Wait for 500 millisecond(s)
      digitalWrite(7, HIGH);
      delay(500); // Wait for 500 millisecond(s)
      digitalWrite(7, LOW);
      delay(500); // Wait for 500 millisecond(s)
      digitalWrite(7, HIGH);
      delay(500); // Wait for 500 millisecond(s)
      // Sinal vermelho para carro desativado
      digitalWrite(9, LOW);
      // Sinal verde para pedestre desativado
      digitalWrite(7, LOW);
      // Sinal sonoro desativado
      noTone(5);
    }
  }
}