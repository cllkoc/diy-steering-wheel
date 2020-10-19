int data;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(4,INPUT_PULLUP);
pinMode(5,INPUT_PULLUP);

}

void loop() {
  data = analogRead(A4);
  Serial.print(data);
  
 
  if(digitalRead(4)== LOW)
  {
   
    Serial.print('1');
    
  }
if(digitalRead(4)== HIGH)
  {
    Serial.print('0');
  }
   if(digitalRead(5)== LOW)
  {
   
    Serial.println('1');
    
  }
if(digitalRead(5)== HIGH)
  {
    Serial.println('0');
  }
  
delay(1000);
}