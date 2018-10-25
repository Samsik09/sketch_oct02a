int led=13;
int x=A0;
int y=100;
void setup() {
pinMode(A0,INPUT);
Serial.begin(9600);
pinMode(led,OUTPUT);
for(int i=0; i<y; i++){
  delay(100);
  Serial.println(analogRead(x));
  }
  Serial.println(" Value");
  Serial.println (y);
  delay(100);
}


void loop() {}



