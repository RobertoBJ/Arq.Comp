void setup() {

  pinMode(2,INPUT);
  pinMode(3,INPUT);
  //Bus de control
  pinMode(4,INPUT);
  pinMode(5,INPUT);
  pinMode(6,INPUT);

  pinMode(13,OUTPUT);//suma
  pinMode(12,OUTPUT);//resta
  pinMode(11,OUTPUT);//multiplicasión
  pinMode(10,OUTPUT);//división
  pinMode(9,OUTPUT);//Acarreo
  pinMode(8,OUTPUT);//Signo
  pinMode(7,OUTPUT);//Error
}

void loop() {
  
//suma
//Bus de control en las entradas 4,5 y 6  
  if(digitalRead(2)^digitalRead(3) && !digitalRead(4) && (!digitalRead(5)&&digitalRead(6) )){ //suma  

  //Si la entrada A xor B entonces enciende el led de la suma 
    digitalWrite(13,HIGH);
  }else{
    digitalWrite(13,LOW);
    //Si no mantenlo apagado 
  }
  
//Resta

   if(digitalRead(2)^digitalRead(3) && !digitalRead(4)&& digitalRead(5) && !digitalRead(6)){ //resta
  //Si la entrada A xor B entonces enciende el led del signo
    digitalWrite(12,HIGH);
  }else{
    digitalWrite(12,LOW);
    //Si no mantenlo apagado 
  }
//Signo
  if(!digitalRead(2)&&digitalRead(3)&& !digitalRead(4)&& digitalRead(5) && !digitalRead(6)){
    digitalWrite(8,HIGH);
  }else{
    digitalWrite(8,LOW);
  }

//Multipilcacion

 if(digitalRead(2)&&digitalRead(3) && !digitalRead(4)&& digitalRead(5) && digitalRead(6)){
  // si ambos estan encendidos se suman y se agreegan al acarreo 
    digitalWrite(11,HIGH);
  }else{
    digitalWrite(11,LOW);
  }

//Division

  if(digitalRead(2)&&digitalRead(3)&& digitalRead(4)&& !digitalRead(5) && !digitalRead(6))
{
    digitalWrite(10,HIGH);
  }else{
    digitalWrite(10,LOW);
  }
//Error
  if( ((!digitalRead(2) && !digitalRead(3)) || (digitalRead(2) && !digitalRead(3))) && (digitalRead(4) && !digitalRead(5) && !digitalRead(6))) {
    
    digitalWrite(7,HIGH);
  }else{
    digitalWrite(7,LOW);
  }

//Acarreo
  if(digitalRead(2)&&digitalRead(3) && !digitalRead(4) && !digitalRead(5)&&digitalRead(6)){//acarreo suma
  // si ambos están encendidos se suman y se agregan al acarreo 
    digitalWrite(9,HIGH);
  }else{
    digitalWrite(9,LOW);
  }

}