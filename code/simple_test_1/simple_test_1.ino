#define LED_PIN 9
#define PHOTORESISTOR_PIN A3

int senseDefault;
int tolerance = 10;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(PHOTORESISTOR_PIN, INPUT);
  Serial.begin(9600);

  senseDefault = analogRead(PHOTORESISTOR_PIN);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);

  int lightStrength = analogRead(PHOTORESISTOR_PIN);

  if (lightStrength < 100) {
    Serial.println("DETECTED!");
  }
}
