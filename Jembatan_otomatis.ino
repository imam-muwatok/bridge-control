int sensor=2;
int pbKanan=A0, pbKiri=A1;
int kanan=3;
int kiri=4;

void setup() {
  pinMode(pbKanan,INPUT_PULLUP);
  pinMode(pbKiri,INPUT_PULLUP);
  pinMode(kanan,OUTPUT);
  pinMode(kiri,OUTPUT);
  pinMode(sensor,INPUT);
}

void loop() {
    
if(digitalRead(pbKanan)==0 &&      
    digitalRead(pbKiri)==1){
    digitalWrite(kiri,LOW);  
    delay(3000);
    digitalWrite(kanan,HIGH);
    delay(5000);  
  }
else if(digitalRead(sensor)==HIGH){
        
    digitalWrite(kanan,LOW);
    digitalWrite(kiri,HIGH);
    delay(5000);  
     
    }
else if(digitalRead(pbKanan)==1 && digitalRead(pbKiri)==0){
          
    digitalWrite(kanan,LOW);
    
    digitalWrite(kiri,HIGH);
    delay(5000);
         
  }
else{
    digitalWrite(kanan,LOW);
    digitalWrite(kiri,LOW);
  }
}
