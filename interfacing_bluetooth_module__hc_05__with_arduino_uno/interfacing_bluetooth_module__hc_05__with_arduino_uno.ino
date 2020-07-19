//sketch created by Akshay Joseph
char inputByte;
void setup() {
  Serial.begin(9600);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);

}

void loop() {
  while (Serial.available() > 0) {
    inputByte = Serial.read();
    Serial.println(inputByte);
    if (inputByte == 'L') {
      digitalWrite(6, LOW);
    }
    else if (inputByte == '7') {
      digitalWrite(6, HIGH);
    }
    else if (inputByte == 'F') {
      digitalWrite(7,LOW);
    }
    else if (inputByte == '3') {
      digitalWrite(7, HIGH);
    }
  }
}
