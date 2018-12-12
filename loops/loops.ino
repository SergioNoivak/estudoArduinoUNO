
#define inicio_pinos 2
#define out_pinos 11


bool executar = true;


void setup() {
  for(int i=inicio_pinos ; i<out_pinos ;i++)
      pinMode(i,OUTPUT);
    
  Serial.begin(9600);


  pinMode(A0,INPUT);

}

void loop() {

     if(Serial.available()){
        Serial.read();
        executar= !executar;

     }  
    if(executar){    
    for(int i=inicio_pinos ; i<out_pinos ;i++){
            
           digitalWrite(i,HIGH);
           delay(50);
    }
    
    for(int i=out_pinos-1 ; i>=inicio_pinos ;i--){
      
           digitalWrite(i,LOW);
           delay(100);
    }
   }


   


}
