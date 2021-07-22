int IR;



void setup() {
  pinMode(13,INPUT);
  pinMode(4, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);

}

void loop() {
 IR = digitalRead(13);

 if (IR == HIGH){
  digitalWrite(6, HIGH);
  delay(500);
  
  IR = digitalRead(13);
  
  if (IR == HIGH){
    digitalWrite(7, HIGH);
    delay(500);
    IR = digitalRead(13);
    
    if (IR == HIGH){
      digitalWrite(8, HIGH);
      delay(500);
      digitalWrite(4, HIGH);
      delay(500);
      digitalWrite(4, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
    }
    else if (IR == LOW){
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      return 0;
    }  
  }
  else if (IR == LOW){
    digitalWrite(6,LOW);
    return 0;
  }
 }
}
