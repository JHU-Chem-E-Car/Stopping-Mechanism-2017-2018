 const int sensorPin=5;
const int relayPin=13;

int Threshold=100;


void setup() {
  Serial.begin(9600);
  pinMode(relayPin,OUTPUT);
}

void loop() {
  int sensorReading=analogRead(sensorPin);
  Serial.print("sensorReading: ");
  Serial.println(sensorReading);
  
  if(sensorReading>=Threshold){
    digitalWrite(relayPin,LOW);
  }
  else{
    digitalWrite(relayPin,HIGH);
    exit(0);
  }
  delay(100);

}
