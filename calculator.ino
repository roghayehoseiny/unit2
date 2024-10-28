void setup() {
  Serial.begin(9600);

}

void loop() {
  while (Serial.available ()>0) {
    float num1=Serial.parseFloat();
    char a =Serial.read();
    float  num2=Serial.parseFloat();
  
  switch (a){
    Serial.print(num1);
  Serial.print(a);
  Serial.print(num2);
  Serial.print('=');
case'+':
  Serial.println(num1 + num2);
  break;
case'-':
  Serial.println(num1 - num2);
  break;
case'*':
  Serial.println(num1 * num2);
  break;
case'/':
  if (num2 != 0) {
    Serial.println(num1 / num2);
    break;
  }else {
    Serial.println("err:num2 cant be zero!");
    break;
  }

}
}

}
