#define sensorDigital 2
#define buzzer 3
#define motor 7
void setup() {
  pinMode(sensorDigital, INPUT);
  pinMode(buzzer, OUTPUT);
   pinMode(motor,OUTPUT);
  Serial.begin(9600);
}
void loop() {
  bool digital = digitalRead(sensorDigital);
  int analog = analogRead(A0);
  Serial.print("Analog value : ");
  Serial.print(analog);
  Serial.print("\t");
  Serial.print("Digital value :");
  Serial.println(digital);
  if (digital == 0) {
     digitalWrite(motor,HIGH);
     digitalWrite(buzzer, HIGH);
  } else {
    digitalWrite(motor,LOW);
    digitalWrite(buzzer, LOW);

  }

}
