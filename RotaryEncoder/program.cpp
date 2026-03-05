int clk = 2;
int dt = 3;
int position = 0;
void setup() {
  pinMode(clk, INPUT);
  pinMode(dt, INPUT);
  Serial.begin(9600);
}
void loop() {
  if (digitalRead(clk) != digitalRead(dt))
    position++;
  else
    position--;
  Serial.println(position);
  delay(200);
}
