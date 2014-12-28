int notes[] = {262, 294, 330, 349};

void setup() {
    Serial.begin(9600);
}

void loop() {
    int keyVal = analogRead(A0);
    Serial.println(keyVal);

    if (keyVal >= 1020) {
        tone(8, notes[0]);
    } else if (keyVal >= 980 && keyVal <= 1010) {
        tone(8, notes[1]);
    } else if (keyVal >= 505 && keyVal <= 515) {
        tone(8, notes[2]);
    } else if (keyVal >= 5 && keyVal <= 15) {
        tone(8, notes[3]);
    } else {
        noTone(8);
    }
}
