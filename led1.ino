int led=13;
int led2=8;

void setup() {
 pinMode(led,OUTPUT);
     pinMode(led2,OUTPUT);

}

void loop() {
     digitalWrite(led,HIGH);
    delay(1000);
    digitalWrite(led,LOW);
    delay(1000);
    digitalWrite(led2,HIGH);
    delay(1000);
    digitalWrite(led2,LOW);
    delay(1000);


}
