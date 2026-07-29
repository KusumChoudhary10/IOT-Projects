#include <Servo.h>

// Pin Definitions
const int trigPin = D1;
const int echoPin = D2;
const int servoPin = D4;

Servo myservo;

// Variables
long duration;
int distance;
int safetyDistance;

void setup() {
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT);
  
  myservo.attach(servoPin);
  myservo.write(0); // Start with bin closed
  
  Serial.begin(9600);
}

void loop() {
  // Clear the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Trigger the sensor
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the echoPin
  duration = pulseIn(echoPin, HIGH);

  // Calculate distance in cm
  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.println(distance);

  // If hand is closer than 20cm, open the bin
  if (distance <= 20 && distance > 0) {
    myservo.write(90); // Open position (adjust angle as needed)
    delay(3000);       // Keep it open for 3 seconds
  } else {
    myservo.write(0);  // Closed position
  }
  
  delay(100); 
}