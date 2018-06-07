const int sensorPin=5;
const int relayPin=13;

int Threshold=1023;
int lowThreshold=900;

void setup() {
  Serial.begin(9600);
  pinMode(relayPin,OUTPUT);
}

void loop() {
  int sensorReading=analogRead(sensorPin);
  Serial.print("sensorReading: ");
  Serial.println(sensorReading);
  
  if(sensorReading>=Threshold-1){
    digitalWrite(relayPin,LOW);
  }
  else{
    digitalWrite(relayPin,HIGH);
    exit(0);
  }
  delay(100);

}
