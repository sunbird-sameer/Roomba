    
    
    //IR Sensor Pin = 8;
 
   //Left Motor Pin A = 4;
   //Left Motor Pin B = 5;
 
   //Right Motor Pin A = 6;
   //Right Motor Pin B = 7;

   //Right Motor Enable = 9
   //Left Motor Enable = 10


void setup() {

  pinMode(8,INPUT);
 
  pinMode(4,OUTPUT);//Left Motor A
  pinMode(5,OUTPUT);//Left Motor B
 
  pinMode(6,OUTPUT);//Right Motor A
  pinMode(7,OUTPUT);//Right Motor B

  pinMode(9,OUTPUT);//ENA
  pinMode(10,OUTPUT);//ENB
 

 
  // put your setup code here, to run once:

}

void loop() {

  digitalWrite(5,LOW);
  digitalWrite(7,LOW);

  digitalWrite(9,HIGH);//ENA High
  digitalWrite(10,HIGH);//ENB High

  digitalRead(8);
 
  if(8 == HIGH){

    digitalWrite(5,LOW);
    digitalWrite(7,LOW);
    digitalWrite(4,LOW);
    digitalWrite(6,LOW);

    delay(500);

    digitalWrite(5,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(6,LOW);

    delay(1000);

    digitalWrite(5,LOW);
    digitalWrite(7,LOW);
    digitalWrite(4,LOW);
    digitalWrite(6,LOW);

   
 
  int  randNumber = random(0, 9);
 
  if (randNumber % 2 == 0) {

    digitalWrite(4,HIGH);
    digitalWrite(6,LOW);

    delay(3000);

    digitalWrite(4,LOW);
    digitalWrite(6,LOW);
   
  }else{

    digitalWrite(6,HIGH);
    digitalWrite(4,LOW);
        
    delay(3000);

    digitalWrite(4,LOW);
    digitalWrite(6,LOW);
  }
 }

  delay(100);

  if (8 == LOW) {

    digitalWrite(6,HIGH);
    digitalWrite(4,HIGH);
  }
}
