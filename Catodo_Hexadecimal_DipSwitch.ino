void setup() {
  pinMode(1, INPUT); //Entrada 1
  pinMode(2, INPUT); //Entrada 2
  pinMode(3, INPUT); //Entrada 3
  pinMode(4, INPUT); //Entrada 4

  pinMode(5, OUTPUT); //G
  pinMode(6, OUTPUT); //F
  pinMode(7, OUTPUT); //E
  pinMode(8, OUTPUT); //D
  pinMode(9, OUTPUT); //C
  pinMode(10, OUTPUT); //B
  pinMode(11, OUTPUT); //A
}

void loop() {

  if (!digitalRead(1) && !digitalRead(2) && !digitalRead(3) && !digitalRead(4)) { //0 

    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
  }
  if (!digitalRead(1) && !digitalRead(2) && !digitalRead(3) && digitalRead(4)) { //1

    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
  }
  if(!digitalRead(1) && !digitalRead(2)&& digitalRead(3)&& !digitalRead(4)){ //2

    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
  }
   if(!digitalRead(1) && !digitalRead(2)&& digitalRead(3)&& digitalRead(4)){ //3

    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
  }
  if(!digitalRead(1) && digitalRead(2)&& !digitalRead(3)&& !digitalRead(4)){ //4

    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
  }
  if(!digitalRead(1) && digitalRead(2)&& !digitalRead(3)&& digitalRead(4)){ //5

    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
  }
  if(!digitalRead(1) && !digitalRead(2)&& !digitalRead(3)&& !digitalRead(4)){ //6

    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
  }
  if(!digitalRead(1) && digitalRead(2)&& digitalRead(3)&& digitalRead(4)){ //7 

    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
  }
  if(digitalRead(1) && !digitalRead(2)&& !digitalRead(3)&& !digitalRead(4)){ //8

    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
  }
  if(digitalRead(1) && !digitalRead(2)&& !digitalRead(3)&& digitalRead(4)){ //9

    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
  }
  if(digitalRead(1) && !digitalRead(2)&& digitalRead(3)&& !digitalRead(4)){ //A

    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
  }
  if(digitalRead(1) && !digitalRead(2)&& digitalRead(3)&& digitalRead(4)){ //b

    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
  }
  if(digitalRead(1) && digitalRead(2)&& !digitalRead(3)&& !digitalRead(4)){ //C
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
  }
  if(digitalRead(1) && digitalRead(2)&& !digitalRead(3)&& digitalRead(4)){ //d

    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
  }
  if(digitalRead(1) && digitalRead(2)&& digitalRead(3)&& !digitalRead(4)){ //E

    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
  }
  if(digitalRead(1) && digitalRead(2)&& digitalRead(3)&& digitalRead(4)){ //F

    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
  }
}