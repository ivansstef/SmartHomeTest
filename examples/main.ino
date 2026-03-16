const int redLED = 8;
const int yellowLED = 9;
const int greenLED = 10;
const int buttonPin = 2;

bool stopLoop = false;

void setup() {
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  while (!stopLoop) {

    digitalWrite(redLED, HIGH);
    delay(800);
    digitalWrite(redLED, LOW);
    if (digitalRead(buttonPin) == HIGH) stopLoop = true;

    if (stopLoop) break;

    digitalWrite(yellowLED, HIGH);
    delay(800);
    digitalWrite(yellowLED, LOW);
    if (digitalRead(buttonPin) == HIGH) stopLoop = true;

    if (stopLoop) break;

    digitalWrite(greenLED, HIGH);
    delay(800);
    digitalWrite(greenLED, LOW);
    if (digitalRead(buttonPin) == HIGH) stopLoop = true;
  }

  digitalWrite(redLED, LOW);
  digitalWrite(yellowLED, LOW);
  digitalWrite(greenLED, LOW);
}
