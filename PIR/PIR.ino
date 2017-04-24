/*PIR Motion Example*/
int sensor=2;
int led=13; 
int pir;
void setup()
{
  pinMode(led,OUTPUT);
  pinMode(sensor,INPUT);
  digitalWrite(led,LOW);//led off
}
void loop()
{
  pir= digitalRead(sensor);//Reads the Sensor
  if (pir==1){
     digitalWrite(led,HIGH);//led on
    
    }
    else{
      digitalWrite(led,LOW);//led on
    }
    
    delay(1000);
    pir = LOW;
}
