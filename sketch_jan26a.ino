int count=0,ir1=2,ir2=4,ledPin=5;
void setup() {
  pinMode(ir1,INPUT);
  pinMode(ir2,INPUT);
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {

  if(digitalRead(ir1)==1)
  {

    for(int i=0;i<200;i++)
    {
      if(digitalRead(ir2)==1)
      count++;
      
    }delay(10);
    Serial.print(count);
  }
  if(digitalRead(ir2)==1)
  {

    for(int i=0;i<200;i++)
    {
      if(digitalRead(ir1)==1)
      count--;
      
    }delay(10);
  
  if(count==5){
  analogWrite(ledPin,255);
  Serial.print("Room is full");
  }
  else
  analogWrite(ledPin,51*count);

  }}
 
