int Relay=13;
int sensor=8;
int val;
void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(8,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val=digitalRead(8);
  
  if(800<=val<=1100)
  {
    digitalWrite(13,HIGH);
    delay(8000);
  }
  if(500<=val<=799)
  {
    digitalWrite(13,HIGH);
    delay(4000);
  }
  if(300<=val<=499)
  {
    digitalWrite(13,HIGH);
    delay(2000);
  }

}
