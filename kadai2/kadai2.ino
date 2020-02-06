int rightMoter_o1 = 5;
int rightMoter_o2 = 6;
int leftMoter_o1 = 8;
int leftMoter_o2 = 9;

int analogPin0 = 0;
int analogPin1 = 1;
double val = 0;
double bias = 0.0048;

void setup() {
  // put your setup code here, to run once:
  pinMode(rightMoter_o1,OUTPUT);
  pinMode(rightMoter_o2,OUTPUT);
  pinMode(leftMoter_o1,OUTPUT);
  pinMode(leftMoter_o2,OUTPUT);

  Serial.begin(9600);
}

void loop() {
  val = double(analogRead(analogPin0)*bias);
  Serial.println(val);
  if(val < 1) {
    motorMove(0);
    delay(1000000);
  } else {
    motorMove(1);
  }
  delay(100);
  // put your main code here, to run repeatedly:

}

void motorMove(int Switch){
  switch (Switch) {
    case 0:
      digitalWrite(rightMoter_o1, HIGH);
      digitalWrite(rightMoter_o2, HIGH);
      digitalWrite(leftMoter_o1, HIGH);
      digitalWrite(leftMoter_o2, HIGH);
      break;
    case 1:
      digitalWrite(rightMoter_o1, HIGH);
      digitalWrite(rightMoter_o2, LOW);
      digitalWrite(leftMoter_o1, HIGH);
      digitalWrite(leftMoter_o2, LOW);
      break;
  }
}
