#define PIR 4
int val = 0;  
void setup() {
pinMode(PIR, INPUT);
   Serial.begin(9600); 
  // put your setup code here, to run once:

}

void loop() {
  val = digitalRead(PIR); 
  if(val == HIGH){
    Serial.println("Motion Found");
    }
    else{
       Serial.println("Motion Not Found");
      }
      delay(1000);
  // put your main code here, to run repeatedly:

}
