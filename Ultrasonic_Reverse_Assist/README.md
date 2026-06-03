# Arduino Distance Alert System

A simple Arduino project using an ultrasonic sensor, LEDs, and a passive buzzer to indicate object distance.

## Components Used

* Arduino Uno (or compatible board)
* HC-SR04 Ultrasonic Sensor
* 3 LEDs (Green, Yellow, Red)
* Passive buzzer
* Resistors (for LEDs)
* Breadboard and jumper wires

## Working

The system measures distance using an ultrasonic sensor and gives visual/audio feedback:

* **Green LED** → Default state (safe distance, > 26 cm)
* **Yellow LED** → Medium range (11–26 cm) with low buzzer tone
* **Red LED** → Very close object (≤ 10 cm) with high buzzer tone

## Pin Configuration

| Component          | Pin |
| ------------------ | --- |
| Ultrasonic Trigger | 10  |
| Ultrasonic Echo    | 8   |
| Green LED          | 12  |
| Yellow LED         | 5   |
| Red LED            | 4   |
| Passive Buzzer     | 11  |

## Library Used

Install the **Ultrasonic** library by Eric Simoes from the Arduino Library Manager.

## How to Run

1. Connect the components.
2. Install the required library.
3. Upload the `.ino` file to Arduino.
4. Move an object near the sensor and observe LED/buzzer feedback.


