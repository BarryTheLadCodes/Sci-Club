const int led1 = 9;
const int led2 = 7;
const int led3 = 5;
const int led4 = 3;

void setup() {
    // set the digital pin as output:
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);  
    pinMode(led3, OUTPUT);
    pinMode(led4, OUTPUT);
}

void loop() {
    digitalWrite(led1, HIGH);
    delay(1000);
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    delay(1000);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
    delay(1000);
    digitalWrite(led3, LOW);
    digitalWrite(led4, HIGH);
    delay(1000);
    digitalWrite(led4, LOW);
}