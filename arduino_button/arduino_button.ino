const int button = 12;

void setup() {
    // set the digital pin as output:
    pinMode(button, INPUT);
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
    if (digitalRead(button) == HIGH) {
        digitalWrite(LED_BUILTIN, HIGH);
    } else {
        digitalWrite(LED_BUILTIN, LOW);
    }
}