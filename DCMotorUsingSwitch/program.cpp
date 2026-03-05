int motor = 9;
int sw = 2;

void setup() {
  pinMode(motor, OUTPUT);
  pinMode(sw, INPUT);
}

void loop() {
  if (digitalRead(sw) == HIGH)
    digitalWrite(motor, HIGH);
  else
    digitalWrite(motor, LOW);
}
