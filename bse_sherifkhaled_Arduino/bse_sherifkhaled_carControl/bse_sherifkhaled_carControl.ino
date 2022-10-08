#define motor1x 9 //motor 1 on the right wheel (input number 1)
#define motor1y 10 //motor 1 on the right wheel (input number 2)
#define motor2x 11 //motor 2 on the left wheel (input number 1)
#define motor2y 12 // motor 2 on the left wheel (input number 2)

#define button_fw 6
#define button_dw 5
#define button_r 4
#define button_l 3

void setup() {

pinMode(6,INPUT);
pinMode(5,INPUT);
pinMode(4,INPUT);
pinMode(3,INPUT);
digitalWrite(6,HIGH);
digitalWrite(5,HIGH);
digitalWrite(4,HIGH);
digitalWrite(3,HIGH);

pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
}

void loop() {

if(digitalRead(6)==LOW)
{
  forward();
}

if(digitalRead(5)==LOW)
{
  down();
}

if(digitalRead(4)==LOW)
{
  right();
}

if(digitalRead(6)==LOW)
{
  left();
}
}

void forward() 
{
  digitalWrite(11, HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10, LOW);
  digitalWrite(12, LOW);
}
void backward()
{
  digitalWrite(11, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(12, HIGH);
}
void right() 
{
  digitalWrite(11, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(12, HIGH);
}
void left() 
{
  digitalWrite(11, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(12, LOW);
}
