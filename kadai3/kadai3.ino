int rightMoter_o1 = 5;
int rightMoter_o2 = 6;
int leftMoter_o1 = 8;
int leftMoter_o2 = 9;
int analogPin0 = 0;
int analogPin1 = 1;

double leftVal = 0;
double rightVal = 0;
double bias = 0.0048;

double limitL = 1;
double limitR = 1;
double d = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(rightMoter_o1,OUTPUT);
  pinMode(rightMoter_o2,OUTPUT);
  pinMode(leftMoter_o1,OUTPUT);
  pinMode(leftMoter_o2,OUTPUT);

  Serial.begin(9600);
}

void loop() {
  leftVal = double(analogRead(analogPin0)*bias);
  rightVal = double(analogRead(analogPin1)*bias);
  Serial.println(leftVal);
  Serial.println(rightVal);
  Serial.println("\n");

  if(leftVal <= limitL && rightVal <= limitR) {
    motorMove(0);
  }
  else if(leftVal <= limitL) {
    motorMove(1);
  }else if(rightVal <= limitR){
    motorMove(2);
  }
  delay(d);
  // put your main code here, to run repeatedly:

}

void motorMove(int Switch){
  switch (Switch) {
    case 0:
      digitalWrite(rightMoter_o1, LOW);
      digitalWrite(rightMoter_o2, HIGH);
      digitalWrite(leftMoter_o1, LOW);
      digitalWrite(leftMoter_o2, HIGH);
      break;
    case 1:
      digitalWrite(rightMoter_o1, HIGH);
      digitalWrite(rightMoter_o2, LOW);
      digitalWrite(leftMoter_o1, HIGH);
      digitalWrite(leftMoter_o2, HIGH);
      break;
      case 2:
      digitalWrite(rightMoter_o1, HIGH);
      digitalWrite(rightMoter_o2, HIGH);
      digitalWrite(leftMoter_o1, HIGH);
      digitalWrite(leftMoter_o2, LOW);
      break;
      case 3:
      digitalWrite(rightMoter_o1, HIGH);
      digitalWrite(rightMoter_o2, LOW);
      digitalWrite(leftMoter_o1, HIGH);
      digitalWrite(leftMoter_o2, LOW);
      delay(20);
      break;
  }
}
