  int rightMoter_o1 = 5;
  int rightMoter_o2 = 6;
  int leftMoter_o1 = 8;
  int leftMoter_o2 = 9;
  int mode = 0;

void setup() {
  // put your setup code here, to run once:
 

pinMode(rightMoter_o1,OUTPUT);
pinMode(rightMoter_o2,OUTPUT);
pinMode(leftMoter_o1,OUTPUT);
pinMode(leftMoter_o2,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("befor Func\n");

  motorMove(mode);
  Serial.println("after Func\n");
  delay(3000);
  mode++;

}

void motorMove(int mode){
 switch (mode) {
    case 0:
      digitalWrite(rightMoter_o1, HIGH);
      digitalWrite(rightMoter_o2, LOW);
      digitalWrite(leftMoter_o1, HIGH);
      digitalWrite(leftMoter_o2, LOW);
      Serial.println("STRAIGHT\n");
      break;
    case 1:
      digitalWrite(rightMoter_o1, LOW);
      digitalWrite(rightMoter_o2, HIGH);
      digitalWrite(leftMoter_o1, LOW);
      digitalWrite(leftMoter_o2, HIGH);
      Serial.println("BACK\n");
      break;
    case 2:
      digitalWrite(rightMoter_o1, HIGH);
      digitalWrite(rightMoter_o2, LOW);
      digitalWrite(leftMoter_o1, HIGH);
      digitalWrite(leftMoter_o2, HIGH);
      Serial.println("TURN RIGHT\n");
      break;
    case 3:
      digitalWrite(rightMoter_o1, HIGH);
      digitalWrite(rightMoter_o2, HIGH);
      digitalWrite(leftMoter_o1, HIGH);
      digitalWrite(leftMoter_o2, LOW);
      Serial.println("TURN LEFT\n");
      break;
    case 4:
      digitalWrite(rightMoter_o1, HIGH);
      digitalWrite(rightMoter_o2, HIGH);
      digitalWrite(leftMoter_o1, HIGH);
      digitalWrite(leftMoter_o2, HIGH);
      Serial.println("STOP\n");
      break;
  } 
}
