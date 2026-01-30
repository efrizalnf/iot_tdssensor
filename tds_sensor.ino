#define TDS 34


void setup() {

Serial.begin(9600);
}

void loop() {

  float voltaseTds = analogRead(TDS) * (float)5 / 1024;
  float nilaiTds = 2000 / 5 * voltaseTds;
  Serial.print("Nilai sensor TDS : ");
  Serial.println(String(nilaiTds, 2) + " ppm");
  delay(1500);
}
