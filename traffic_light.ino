void setup() {
  // put your setup code here, to run once:
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(7, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(7))
{
  digitalWrite(2, HIGH);
  Serial.println("STOP");
  delay(2000);
  digitalWrite(2,LOW);

   digitalWrite(3, HIGH);
  Serial.println("LOOK");
  delay(2000);
  digitalWrite(3,LOW);
  
 digitalWrite(4, HIGH);
  Serial.println("GO");
  delay(2000);
  digitalWrite(4,LOW);

   digitalWrite(3, HIGH);
  Serial.println("LOOK");
  delay(2000);
  digitalWrite(3,LOW);

  digitalWrite(2, HIGH);
  Serial.println("STOP");
  delay(2000);
  digitalWrite(2,LOW);
  
  }
}
