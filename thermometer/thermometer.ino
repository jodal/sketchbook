const int sensorPin = A0;
const float baseTemp = 24.0;

void setup() {
    Serial.begin(9600);

    for (int pin = 2; pin < 5; pin++) {
        pinMode(pin, OUTPUT);
        digitalWrite(pin, LOW);
    }
}

void loop() {
    int sensorVal = analogRead(sensorPin);
    float voltage = (sensorVal / 1024.0) * 5.0;
    float temp = (voltage - 0.5) * 100;

    Serial.print("Sensor value: ");
    Serial.print(sensorVal);
    Serial.print(", Volts: ");
    Serial.print(voltage);
    Serial.print(", Celcius: ");
    Serial.println(temp);

    digitalWrite(2, temp > baseTemp + 2);
    digitalWrite(3, temp > baseTemp + 4);
    digitalWrite(4, temp > baseTemp + 6);

    delay(1);
}
