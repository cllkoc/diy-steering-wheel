int x = 0;
int y = 0;
int veriX = 0;
int veriY = 0;
int sum = 0;
int sum2 = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(P1_0,INPUT);
pinMode(A7,INPUT);
pinMode(P2_1,INPUT_PULLUP);
Serial.begin(9600);

}

void loop() {
  veriY =  analogRead(A7);
  veriX =  analogRead(P1_0);
  sum = sum + veriX;
  sum2 = sum2 + veriY;
  x++;
  
  if(x==20)
  {
   sum = sum / 20;  
   sum2 = sum2 /20;
   sum = map(sum ,0,1023 , 0, 3000);
   sum2 = sum2 - 3800;
   sum2 = map(sum2 ,0,1023 , 0, 1500);
   if(sum2 < 0)
   sum2 = 0;
   Serial.print(sum);
   Serial.print('#');
   Serial.print(sum2);
   Serial.print('#');
   if(digitalRead(P2_1)==0)
   Serial.println("10");
   else
   Serial.println("00");
   sum = 0;
   sum2 = 0;
   x = 0;
  }
  delay(1);
}
