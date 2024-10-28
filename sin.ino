void Setup(){
    Serial.begin(9600);

}
void loop() {
    for(float k = 0; k<360.00; k++){
        Serial.print(sin(k* (PI / 180.00)));
        Serial.print(" ");
        Serial.println(cos(k* (PI / 180.00)));

    }
}
