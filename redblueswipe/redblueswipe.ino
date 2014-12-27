const int greenLEDPin = 9;
const int redLEDPin = 10;
const int blueLEDPin = 11; 

void setup() {
    pinMode(greenLEDPin, OUTPUT);
    pinMode(redLEDPin, OUTPUT);
    pinMode(blueLEDPin, OUTPUT);
}

void loop() {
    for (int i = 0; i < 256; i++) {
        analogWrite(redLEDPin, i);
        analogWrite(blueLEDPin, 255 - i);
        delay(3);
    }

    for (int i = 0; i < 256; i++) {
        analogWrite(redLEDPin, 255 - i);
        analogWrite(blueLEDPin, i);
        delay(3);
    }
}
