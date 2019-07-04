void setup() {
  // put your setup code here, to run once:
pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  Serial.begin(9600);
}
void forward()
{
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(5,LOW);
  digitalWrite(4,HIGH);
}
void backward()
{
  digitalWrite(11,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
}
void left()
{
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(5,LOW);
  digitalWrite(4,HIGH);
}
void right()
{
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(5,LOW);
  digitalWrite(4,LOW);
}
void loop() {
  // put your main code here, to run repeatedly:
int income;
  while(Serial.available()>0)
  {
    income=Serial.read();
    switch(income){
      case 'f': forward();break;
      case 'b': backward();break;
      case 'l': left();break;
      case 'r': right();break;
      default: break;
    }
  }
}
