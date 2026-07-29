# 🗑️ Smart Dustbin System

An IoT-based Smart Dustbin System designed to promote hygienic and contactless waste disposal. The project uses an **ESP8266 NodeMCU**, **HC-SR04 Ultrasonic Sensor**, and **SG90 Servo Motor** to automatically open and close the dustbin lid whenever an object is detected within a specified distance.

---

## ✨ Components Used

* ESP8266 NodeMCU
* HC-SR04 Ultrasonic Sensor
* SG90 Servo Motor
* Breadboard
* Jumper Wires
* 5V Power Supply

---

## ⚙️ Working

The ultrasonic sensor continuously measures the distance in front of the dustbin. When a hand or object is detected within the predefined threshold, the ESP8266 processes the sensor data and commands the servo motor to rotate, opening the lid automatically. After a short delay, the servo returns to its original position, closing the lid without requiring any physical contact.

---

## 🔌 Circuit Connections

### HC-SR04 Ultrasonic Sensor

| Sensor Pin | ESP8266 Pin |
| ---------- | ----------- |
| VCC        | VIN / 5V    |
| GND        | GND         |
| TRIG       | D5          |
| ECHO       | D6          |

### SG90 Servo Motor

| Servo Pin | ESP8266 Pin |
| --------- | ----------- |
| Signal    | D4          |
| VCC       | 5V          |
| GND       | GND         |

> **Note:** Using an external 5V power supply for the servo motor is recommended to ensure stable operation.

---

## 🧠 Working Principle

1. The ultrasonic sensor continuously monitors the distance to nearby objects.
2. When an object is detected within the preset range, the ESP8266 receives the sensor data.
3. The controller rotates the servo motor to open the dustbin lid.
4. The lid remains open for a few seconds to allow waste disposal.
5. The servo then returns to its initial position, automatically closing the lid.
6. The process repeats continuously while the system is powered.

---

## 💻 Software Used

* Arduino IDE
* ESP8266 Board Package
* Servo Library

---

## 🌍 Applications

* Smart Homes
* Schools and Colleges
* Offices
* Hospitals
* Restaurants
* Public Places
* Smart City Projects

---

## 🚀 Future Improvements

* Add dust level monitoring using an ultrasonic sensor inside the bin.
* Send notifications when the dustbin is full.
* Integrate cloud connectivity for remote monitoring.
* Develop a mobile application for real-time status updates.
* Power the system using a rechargeable battery or solar panel.

---

## 📚 Learning Outcomes

Through this project, we gained practical experience in:

* ESP8266 NodeMCU programming
* Ultrasonic sensor interfacing
* Servo motor control
* Embedded systems programming
* IoT hardware integration
* Arduino IDE development
* Circuit design and troubleshooting
* Team collaboration in an engineering project

---

## 👥 Contributors:

* *Kusum Choudhary *
* *Alisha Kawalgi *
* *Mahesh Kolte *
