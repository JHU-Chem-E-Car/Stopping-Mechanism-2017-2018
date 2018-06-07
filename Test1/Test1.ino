int sensorPin=0;

void setup() {
  Serial.begin(9600);// put your setup code here, to run once:
  
}

void loop() {
  int sensorReading=analogRead(sensorPin);
  Serial.print(sensorReading);

}
