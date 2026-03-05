int vib = 2;
int buzzer = 8;

void setup() {
  pinMode(vib, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  if (digitalRead(vib) == HIGH)
    digitalWrite(buzzer, HIGH);
  else
    digitalWrite(buzzer, LOW);
}
