// Vehicle Movement-Based Street Lighting System

#define PIR_PIN 2         // PIR Motion Sensor pin
#define LDR_PIN A0        // LDR sensor analog pin
#define LED_PIN 9         // LED/streetlight connected to PWM pin
#define THRESHOLD 400     // LDR threshold for darkness detection (tweak if needed)
#define LIGHT_DURATION 30000 // Time in ms to keep light on after motion (30 seconds)

unsigned long lastMotionTime = 0;
bool motionDetected = false;

void setup() {
  pinMode(PIR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int ldrValue = analogRead(LDR_PIN);
  int pirState = digitalRead(PIR_PIN);
  unsigned long currentTime = millis();

  // Check for darkness
  if (ldrValue < THRESHOLD) {
    if (pirState == HIGH) {
      // Motion detected
      analogWrite(LED_PIN, 255);  // Full brightness
      lastMotionTime = currentTime;
      motionDetected = true;
      Serial.println("Vehicle Detected: Bright Light ON");
    } else if (motionDetected && (currentTime - lastMotionTime <= LIGHT_DURATION)) {
      // Maintain brightness for a short time after motion
      analogWrite(LED_PIN, 255);
    } else {
      // Dim light when no motion
      analogWrite(LED_PIN, 50); // Minimum intensity
      motionDetected = false;
      Serial.println("No Vehicle: Dim Light ON");
    }
  } else {
    // Daytime - turn lights off
    analogWrite(LED_PIN, 0);
    Serial.println("Daytime: Lights OFF");
  }

  delay(100);
}
