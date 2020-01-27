int rightMoter_o1 = 2;
int rightMoter_o2 = 3;
int leftMoter_o1 = 7;
int leftMoter_o2 = 4;

int analogPin0 = 0;
int analogPin1 = 1;
int val = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(rightMoter_o1,OUTPUT);
  pinMode(rightMoter_o2,OUTPUT);
  pinMode(leftMoter_o1,OUTPUT);
  pinMode(leftMoter_o2,OUTPUT);

  Serial.begin(9600);
}

void loop() {
  val = analogRead(analogPin0);
  Serial.println(val);
  if(val > 500) {
    motorMove(0);
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
      digitalWrite(rightMoter_o2, LOW);
      digitalWrite(leftMoter_o1, HIGH);
      digitalWrite(leftMoter_o2, LOW);
      break;
    case 1:
      digitalWrite(rightMoter_o1, LOW);
      digitalWrite(rightMoter_o2, LOW);
      digitalWrite(leftMoter_o1, LOW);
      digitalWrite(leftMoter_o2, LOW);
      break;
  }
}
