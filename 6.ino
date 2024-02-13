
void setup()
{
  for(int i=3;i<=6;i++){
  pinMode(i,1);
}
  pinMode(9,INPUT_PULLUP);
}

void loop()
{
  if (digitalRead(9)==0){
  
  digitalWrite(3,1);
    
 
analogWrite(8,255);
  }
  else{
  digitalWrite(3,0);
    
 
analogWrite(8,0);
  }
  
}