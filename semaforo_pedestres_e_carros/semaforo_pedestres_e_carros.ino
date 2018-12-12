

  bool botueira = false;



 //executada apenas quando liga ou quando reseta o arduino
 void setup() {


  pinMode(13,INPUT);
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);

  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);


  
}

    void inverter(bool* valor){
      (*valor) = !(*valor);
      
    }


//executado sequencialmente infinitas vezes
void loop() {

    if(digitalRead(13))
      inverter(&botueira);



    digitalWrite(7,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(5,LOW);
    
    digitalWrite(8,LOW);
    digitalWrite(9,HIGH);
    
    delay(10000);
    digitalWrite(7,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(5,LOW);
  
    

    delay(1200);
    digitalWrite(7,LOW);
    digitalWrite(6,LOW);
    digitalWrite(5,HIGH);
    
      delay(3000);
    digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
    delay(6000);
    digitalWrite(8,LOW);
    digitalWrite(9,HIGH);
    delay(3000);
    

 

  // put your main code here, to run repeatedly:

}
