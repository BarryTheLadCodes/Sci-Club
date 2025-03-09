const int R = A0;
const int G = A1;
const int B = A2;

void setup() {
    // set the analog LED pins as output:
    pinMode(R, OUTPUT);
    pinMode(G, OUTPUT);
    pinMode(B, OUTPUT);
}

void loop() {
    // red
    analogWrite(R, 255);
    analogWrite(G, 0);
    analogWrite(B, 0);
    delay(1000);
    // green
    analogWrite(R, 0);
    analogWrite(G, 255);   
    analogWrite(B, 0);
    delay(1000);
    // blue
    analogWrite(R, 0);
    analogWrite(G, 0);
    analogWrite(B, 255);
    delay(1000);
    // yellow
    analogWrite(R, 255);
    analogWrite(G, 255);
    analogWrite(B, 0);
    delay(1000);
    // purple
    analogWrite(R, 255);
    analogWrite(G, 0);
    analogWrite(B, 255);
    delay(1000);
    // aqua
    analogWrite(R, 0);
    analogWrite(G, 255);
    analogWrite(B, 255);
    delay(1000);
    // white
    analogWrite(R, 255);
    analogWrite(G, 255);
    analogWrite(B, 255);
    delay(1000);
    // off
    analogWrite(R, 0);
    analogWrite(G, 0);
    analogWrite(B, 0);
    delay(1000);
}