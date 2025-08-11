void setup() {
  Serial.begin(9600);
  pinMode(10, INPUT);
}

void loop() {
   Serial.println(digitalRead(10));
   delay(500);
}