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
      digitalWrite(led1,1);
      digitalWrite(led2,0);
      digitalWrite(led3,0);
      }
  if (analogRead(rotary) >= 342 && analogRead(rotary) <684)
    {
      digitalWrite(led1,0);
      digitalWrite(led2,1);
      digitalWrite(led3,0);
    }
  if (analogRead(rotary) >=684 && analogRead(rotary) < 1023)
    {
      digitalWrite(led1,0);
      digitalWrite(led2,0);
      digitalWrite(led3,1);
      }
  if (analogRead(rotary) == 0 || analogRead(rotary) == 1023)
  {
    digitalWrite(led1,0);
    digitalWrite(led2,0);
    digitalWrite(led3,0);
    }
}
