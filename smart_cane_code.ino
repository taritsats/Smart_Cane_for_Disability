#include <LowPower.h>

#define trigPin 13
#define echoPin 12
#define motor 7
#define buzzer 6

unsigned long lastDetected = 0;
bool objekTerdeteksi = false;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(motor, OUTPUT);
  pinMode(buzzer, OUTPUT);

  Serial.begin(9600);
  Serial.println("Sistem Ultrasonik Siap!");
}

void loop() {
  long duration, distance;

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH, 20000);
  if (duration == 0) {
    distance = 999;
  } else {
    distance = (duration / 2) / 29.1;
  }

  Serial.print("Jarak: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance < 70) {
    digitalWrite(motor, HIGH);
    digitalWrite(buzzer, LOW);
    Serial.println("Objek terdeteksi!");

    objekTerdeteksi = true;
    lastDetected = millis();
  } else {
    digitalWrite(motor, LOW);
    digitalWrite(buzzer, HIGH);
    objekTerdeteksi = false;
  }

  if (!objekTerdeteksi && (millis() - lastDetected >= 1000)) {
    Serial.println("Tidak ada objek selama 1 detik. Masuk mode hemat daya...");
    delay(100);
    LowPower.powerDown(SLEEP_1S, ADC_OFF, BOD_OFF);
  }

  delay(500);
}