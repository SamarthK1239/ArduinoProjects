int buzzpin = 3;
void setup() {
pinMode(buzzpin, OUTPUT);
}

void loop() {
tone(buzzpin, 1000, 3000);
}
