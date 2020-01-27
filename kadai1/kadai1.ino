 int rightMoter_o1 = 2;
  int rightMoter_o2 = 3;
  int leftMoter_o1 = 4;
  int leftMoter_o2 = 5;
void setup() {
  // put your setup code here, to run once:
 

pinMode(rightMoter_o1,OUTPUT);
pinMode(rightMoter_o2,OUTPUT);
pinMode(leftMoter_o1,OUTPUT);
pinMode(leftMoter_o2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    int mode = 0;

  switch (mode) {
    case 1:
      digitalWrite(rightMoter_o1, HIGH);
      digitalWrite(rightMoter_o2, LOW);
      digitalWrite(leftMoter_o1, HIGH);
      digitalWrite(leftMoter_o2, LOW);
      delay(3000);
      mode++;
      break;
  }
  case 2:
      digitalWrite(rightMoter_o1, LOW);
      digitalWrite(rightMoter_o2, HIGH);
      digitalWrite(leftMoter_o1, LOW);
      digitalWrite(leftMoter_o2, HIGH);
      delay(3000);
      mode++;
      break;
  case 3:
      digitalWrite(rightMoter_o1, LOW);
      digitalWrite(rightMoter_o2, HIGH);
      digitalWrite(leftMoter_o1, HIGH);
      digitalWrite(leftMoter_o2, LOW);
      delay(3000);
      mode++;
      break;
  case 4:
      digitalWrite(rightMoter_o1, HIGH);
      digitalWrite(rightMoter_o2, LOW);
      digitalWrite(leftMoter_o1, LOW);
      digitalWrite(leftMoter_o2, HIGH);
      delay(3000);
      mode++;
      break;
}
