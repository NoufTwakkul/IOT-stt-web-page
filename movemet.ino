void setup() {
serial.begin(9600);
pinmode(13,OUTPUT);

}

void loop() {
 String data=Serial.readString();
 if (data.index0f("right")>-1)
 {
digitalWrite(13,HIGH);
delay(2000);
Serial.println(2);
delay(2000);
digitalWrite(13,LOW);
delay(1000);

 }

 else if(data.index0f("left")>-1){
  digitalWrite(13,HIGH);
  Serial.println(1);
 } 
 else{
    digitalWrite(13,LOW);
  Serial.println(0);
  
 }

}
