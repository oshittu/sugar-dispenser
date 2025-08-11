#include <Servo.h>
  Servo servo;
  int angle = 0;

void setup() {
  Serial.begin(9600);
  servo.attach(2);
  servo.write(angle);
  pinMode(10, INPUT);
}

void loop() {
  Serial.print(digitalRead(10));

   if (digitalRead(10) == HIGH){
    if(angle == 90){
      angle = 0;
    } else if (angle == 0){
      angle = 90;
    }
    servo.write(angle);
   }

  delay(500);
}