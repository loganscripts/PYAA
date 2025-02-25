# Robotic Arm Controlled by a Glove (Arduino + Python)

This project allows you to control a robotic arm using a glove fitted with flex sensors and an MPU6050 gyroscope. The glove's movement is detected, processed using an Arduino, and translated into servo motor movements.

## Features
- **Hand Gesture Control:** Move the robotic arm by bending your fingers.
- **MPU6050 Motion Tracking:** Move your hand to control arm rotation.
- **Python Integration:** Read and visualize sensor data in real-time.

## Getting Started
1. **Assemble the Hardware** - Connect servos, sensors, and Arduino.
2. **Upload Arduino Code** - Flash the `robotic_arm.ino` file to your Arduino.
3. **Run Python Script** - Execute `read_serial.py` to monitor glove input.
4. **Test & Calibrate** - Adjust values to match hand movement.

## Components
- **Arduino Uno/Mega**
- **Flex Sensors (5)**
- **MPU6050 Gyroscope**
- **Servo Motors (4-6)**
- **Glove**
- **Jumper Wires & Resistors**

## Wiring Diagram
(See `Hardware/wiring_diagram.png`)

## License
This project is open-source under the MIT License.
