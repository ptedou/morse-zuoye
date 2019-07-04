void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:

}
void dot()
{
  digitalWrite(8,HIGH);delay(200);digitalWrite(8,LOW);delay(200);
}
void line()
{
  digitalWrite(8,HIGH);delay(600);digitalWrite(8,LOW);delay(200);
}
void loop() {
  String str="";
  int i,t,temp=0;
  int n=0;
  while(Serial.available()>0)
  {
    temp=1;
    str+=char(Serial.read());
    n++;
    delay(2);
  }
  if(temp)
  {
    int j;
    for(j=0;j<n;j++)
    {
      switch(str[j]){
      case 'a':  dot();line(); break;
      case 'b':  line();dot();dot();dot(); break;
      case 'c':  line();dot();line();dot(); break;
      case 'd':  line();dot();dot(); break;
      case 'e':  dot(); break;
      case 'f':  dot();dot();line();dot(); break;
      case 'g':  line();line();dot(); break;
      case 'h':  dot();dot();dot();dot(); break;
      case 'i':  dot();dot(); break;
      case 'j':  dot();line();line();line(); break;
      case 'k':  line();dot();line(); break;
      case 'l':  dot();line();dot();dot(); break;
      case 'm':  line();line(); break;
      case 'n':  line();dot(); break;
      case 'o':  line();line();line(); break;
      case 'p':  dot();line();line();dot(); break;
      case 'q':  line();line();dot();line(); break;
      case 'r':  dot();line();dot(); break;
      case 's':  dot();dot();dot(); break;
      case 't':  line(); break;
      case 'u':  dot();dot();line(); break;
      case 'v':  dot();dot();dot();line(); break;
      case 'w':  dot();line();line(); break;
      case 'x':  line();dot();dot();line(); break;
      case 'y':  line();dot();dot();line(); break;
      case 'z':  line();line();dot();dot(); break;
      case ' ':  delay(1400); break;
      default:  break;
      }
    }
    
  }
  delay(2);
  // put your main code here, to run repeatedly:

}
