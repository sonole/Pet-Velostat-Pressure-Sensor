#define RELAY_PIN D1
#define SENSOR_PIN A0

float thresholdValue = 2.0;
const int timeThreshold = 450;

bool relayStatus = false;
unsigned long startTime = 0;

void setup() {
  pinMode(RELAY_PIN, OUTPUT);
  pinMode(SENSOR_PIN, INPUT_PULLUP);
}

void loop() {
  int sensorValue = analogRead(SENSOR_PIN);
  float threshold = sensorValue * (3.3 / 1000);
  
  // Check if threshold is continuously above the specified value for the specified duration
  if (threshold >= thresholdValue) {
    if (relayStatus == false && millis() - startTime >= timeThreshold) {
      relayStatus = true;
      digitalWrite(RELAY_PIN, HIGH);
    }
  } else {
    // If threshold drops below the specified value, turn off relay
    if (relayStatus == true) {
      relayStatus = false;
      digitalWrite(RELAY_PIN, LOW);
    }
    // Reset the timer when the threshold drops below the specified value
    startTime = millis();
  }
  
  delay(250);
}
