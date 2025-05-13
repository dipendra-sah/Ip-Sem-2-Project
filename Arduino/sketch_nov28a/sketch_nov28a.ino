const int pumpPin1 = 7;
const int pumpPin2 = 8;
const int thresholdPlant1 = 500;
const int thresholdPlant2 = 500;

void setup() {
  pinMode(pumpPin1, OUTPUT);
  pinMode(pumpPin2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int moistureLevel1 = analogRead(A0); // पौधा 1 के लिए सेंसर
  int moistureLevel2 = analogRead(A1); // पौधा 2 के लिए सेंसर

  Serial.print("Plant 1 Moisture: ");
  Serial.println(moistureLevel1);
  Serial.print("Plant 2 Moisture: ");
  Serial.println(moistureLevel2);

  if (moistureLevel1 < thresholdPlant1) {
    digitalWrite(pumpPin1, HIGH); // पंप 1 चालू करें
  } else {
    digitalWrite(pumpPin1, LOW);  // पंप 1 बंद करें
  }

  if (moistureLevel2 < thresholdPlant2) {
    digitalWrite(pumpPin2, HIGH); // पंप 2 चालू करें
  } else {
    digitalWrite(pumpPin2, LOW);  // पंप 2 बंद करें
  }

  delay(1000); // 1 सेकंड का अंतराल
}







