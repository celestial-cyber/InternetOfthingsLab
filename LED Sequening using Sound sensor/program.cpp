int soundPin = 2;
int red = 3, green = 4, white = 5;
int state = 0;

void setup() {
  pinMode(soundPin, INPUT);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(white, OUTPUT);
}
void loop() {
  if (digitalRead(soundPin) == HIGH) {
    delay(300);
    state = (state + 1) % 4;
    digitalWrite(red, LOW);
    digitalWrite(green, LOW);
    digitalWrite(white, LOW);

    if (state == 1) digitalWrite(red, HIGH);
    if (state == 2) digitalWrite(green, HIGH);
    if (state == 3) digitalWrite(white, HIGH);
  }
}
