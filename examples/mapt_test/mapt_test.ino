#include <MapT.h>
boolean printed = false;

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (!printed) {
    Serial.println(map(500.54, 0, 1000, 0, 100));  // 50
    Serial.println(map(500.54, 0, 1000, 0, 1));    // 0

    Serial.println(mapt<float>(500.54, 0, 1000, 0, 100));      // 50.05
    Serial.println(mapt<float>(500.54, 0, 1000, 0, 1));        // 0.50
    Serial.println(mapt<double>(500.54, 0.0, 1000, 0, 100));   // 50.05
    Serial.println(mapt<double>(500.54, 0.0, 1000, 0, 1));     // 0.50
    Serial.println(mapt<long>(501, 0, 1000, 0, 100));          // 50
    Serial.println(mapt<unsigned int>(501, 0, 1000, 0, 100));  // 50

    printed = true;
  }
}
