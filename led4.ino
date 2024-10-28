const int ledpin=13;
void setup() {
    pinMode(ledpin,OUTPUT);
  Serial.begin(9600);

}
void loop()
{
    if(Serial.available()>0){
        char incomingByte=Serial.read();
        if(incomingByte=='H'){
             digitalWrite(ledpin,HIGH);

        }
        else if(incomingByte=='l');
        {
            digitalWrite(ledpin,LOW);
        }
    }
   
    
  
  
    


}
