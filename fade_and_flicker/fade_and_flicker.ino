int ledPin = 3;
int ledPin2 = 6;
int ledPin3 = 5;
int button = 4;

void setup() {
  pinMode(button, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
}

void loop() {
  int fadeValue = 0;
  if (digitalRead(button) == 1) {
  // flicker first led
  analogWrite(ledPin, fadeValue = 150);
  delay(200);
  digitalWrite(ledPin, 0);
  delay(100);
  digitalWrite(ledPin, 1);
  delay(60);
  digitalWrite(ledPin, 0);
  delay(100);
  digitalWrite(ledPin, 1);
  delay(60);
  digitalWrite(ledPin, 0);
  delay(40);
  digitalWrite(ledPin, 1);
  delay(300);
  digitalWrite(ledPin, 0);
  delay(150);

  // first led fades in
  for (fadeValue = 0; fadeValue <= 255; fadeValue += 5) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(60);
  }
  // second led fades in
  for (int fadeValue = 0; fadeValue <= 255; fadeValue += 5) {
    analogWrite(ledPin2, fadeValue);
    delay(60);
    }

  // third led fades in  
  for (int fadeValue = 0; fadeValue <= 255; fadeValue += 5) {
    analogWrite(ledPin3, fadeValue);
    delay(60);
    }

  // wait 6 seconds
  delay(6000);

  // flicker third led


  // third led fades out
  for (int fadeValue = 255; fadeValue >= 0; fadeValue -= 5) {
    analogWrite(ledPin3, fadeValue);
    delay(60);
    }

  // second led fades out
  for (int fadeValue = 255; fadeValue >= 0; fadeValue -= 5) {
  analogWrite(ledPin2, fadeValue);
  delay(60);
    }

  // first led fades out
  for (int fadeValue = 255; fadeValue >= 0; fadeValue -= 5) {
  // sets the value (range from 0 to 255):
  analogWrite(ledPin, fadeValue);
  delay(60);
    }


  }
}
