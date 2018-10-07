#include "NewPing.h"
#include<Servo.h>
Servo myservo;
#define TRIGPIN 12
#define ECHOPIN 11
#define MAXDIST 400
#define pirPin 7
int pos=0;
NewPing sonar(TRIGPIN,ECHOPIN,MAXDIST);
float duration,distance;
int iter=8;
void setup() {
  Serial.begin(9600);
  myservo.attach(9);
  pinMode(13,OUTPUT);// put your setup code here, to run once:
}

void loop() {
  duration=sonar.ping_median(iter);
  distance=(duration/2)*.0343;
  Serial.println(distance);
  if(distance<25)
  {
    Serial.println("hit");
    for(pos=90;pos>=0;pos-=1)
    {
      myservo.write(pos);
      delay(6);
    }
    delay(1000);
    for(pos=0;pos<=90;pos+=1)
    {
     myservo.write(pos); 
    delay(6);  
    }
    delay(900);
  }
  // put your main code here, to run repeatedly:
}
