const int button=8;
#define red 13
#define yellow 12
#define green 11
int flag ;
void setup() {
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
  
  pinMode(button,INPUT);
  digitalWrite(10,HIGH);
  
  flag = 0;
}

void loop() {
 if(flag == 0)
 {
 delay(300);
 digitalWrite(red,HIGH); 
 digitalWrite(yellow,LOW);
 digitalWrite(green,LOW);  
 }

 if(flag == 1)
 {
 delay(300);  
 digitalWrite(yellow,HIGH); 
 digitalWrite(red,LOW);
 digitalWrite(green,LOW); 
 }

  if(flag == 2)
 {
 delay(300);   
 digitalWrite(green,HIGH); 
 digitalWrite(yellow,LOW);
 digitalWrite(red,LOW);    
 }

if(digitalRead(10) == LOW)
{
  delay(30);
flag=flag+1;
 if(flag>=3){ flag = 0 ; }
}

}
