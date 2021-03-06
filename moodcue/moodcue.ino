#include <Servo.h>

Servo servo;
const int servoPin = 9;
const int potPin = A0;
int potVal;
int angle;

void setup() {
    servo.attach(servoPin);
    Serial.begin(9600);
}

void loop() {
    potVal = analogRead(potPin);
    Serial.print("potVal: ");
    Serial.print(potVal);

    angle = map(potVal, 0, 1023, 0, 179);
    Serial.print(", angle: ");
    Serial.println(angle);

    servo.write(angle);
    delay(15);
}
