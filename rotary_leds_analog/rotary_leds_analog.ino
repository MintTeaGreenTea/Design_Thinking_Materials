int button;
int led1;
int led2;
int led3;
int rotary = 1;

void setup() {
  button = 4;
  led1 = 3;
  led2 = 6;
  led3 = 5;
  pinMode(button, INPUT);
  pinMode(rotary, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

  digitalWrite(led1,0);
  digitalWrite(led2,0);
  digitalWrite(led3,0);
}

void loop() {
  if (analogRead(rotary) > 0 && analogRead(rotary) <342)
    {
      digitalWrite(led2,0);
      digitalWrite(led3,0);
      while (analogRead(rotary) > 0 && analogRead(rotary) < 171) {
        analogWrite(led1, map(analogRead(rotary), 1, 170, 1, 144));
        }

      while (analogRead(rotary) >= 171 && analogRead(rotary) <342) {
        analogWrite(led1, map(analogRead(rotary), 171, 341, 144, 255));
        analogWrite(led2, map(analogRead(rotary), 171, 341, 1, 144));
        }
      }
  if (analogRead(rotary) >= 342 && analogRead(rotary) <684)
    {
      while (analogRead(rotary) >= 342 && analogRead(rotary) < 513) {
        analogWrite(led2, map(analogRead(rotary), 342, 512, 144, 255));
        analogWrite(led1, map(analogRead(rotary), 342, 512, 255, 1));
        }

      while (analogRead(rotary) >= 513 && analogRead(rotary) <684) {
        analogWrite(led2, map(analogRead(rotary), 513, 683, 255, 144));
        analogWrite(led3, map(analogRead(rotary), 513, 683, 1, 144));
        }
      }
  if (analogRead(rotary) >=684 && analogRead(rotary) < 1023)
    {
      while (analogRead(rotary) >=684 && analogRead(rotary) < 853) {
        analogWrite(led3, map(analogRead(rotary), 684, 852, 145, 255));
        analogWrite(led2, map(analogRead(rotary), 684, 852, 144, 1));
        }

      while (analogRead(rotary) >= 853 && analogRead(rotary) <1023) {
        analogWrite(led3, map(analogRead(rotary), 853, 1022, 255, 144));
        }
      }
  if (analogRead(rotary) == 0 || analogRead(rotary) == 1023)
  {
    digitalWrite(led1,0);
    digitalWrite(led2,0);
    digitalWrite(led3,0);
    }
}
