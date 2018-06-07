const int sensorPin=5;
const int relayPin=13;

int counter = 0;
int Threshold=1023;
int lowThreshold=900;

void setup() {
  Serial.begin(9600);
  pinMode(relayPin,OUTPUT);
}

void loop() {
  while (counter<1700){
    counter = counter+1;
    Serial.print("counter: ");
    Serial.println(counter);
  }
  
  if(counter<=20){
    digitalWrite(relayPin,LOW);
  }
  else{
    digitalWrite(relayPin,HIGH);
    exit(0);
  }
  delay(100);

}
