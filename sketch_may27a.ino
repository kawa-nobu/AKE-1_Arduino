int s1 = A0;
int led1 = 3;
void setup() {
  // put your setup code here, to run once:
pinMode(s1,INPUT);
pinMode(led1,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensor = analogRead(s1);
  Serial.println(sensor);
  if(sensor>1014){
    digitalWrite(led1,HIGH);
  }else{
    digitalWrite(led1,LOW);
  }
  
}
