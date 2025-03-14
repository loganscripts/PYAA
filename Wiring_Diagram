
Wiring Guide for Robotic Arm with Glove Control

This section explains how to wire the flex sensors, MPU6050, and servo motors to the Arduino. Follow the steps carefully to ensure everything is connected correctly.

⸻

1. Connecting the Flex Sensors

You have five flex sensors — one for each finger (thumb, index, middle, ring, pinky). Here’s how to wire them:
	1.	Attach a flex sensor to the back of each finger using tape or thread.
	2.	For each flex sensor:
	•	One end of the sensor should connect to the 5V pin on the Arduino.
	•	The other end should connect to an analog pin on the Arduino:
	•	Thumb → A0
	•	Index finger → A1
	•	Middle finger → A2
	•	Ring finger → A3
	•	Pinky finger → A4
	•	Add a 10kΩ resistor between the sensor output and ground (GND). This helps stabilize the sensor readings.

Example:
	•	Thumb flex sensor → One end to 5V, other end to A0 with a 10kΩ resistor to GND.
	•	Repeat the same for all other fingers.

⸻

2. Connecting the MPU6050 Gyroscope

The MPU6050 tracks hand rotation and tilt. It has four important pins to connect:
	1.	Mount the MPU6050 on the back of the glove using tape or Velcro.
	2.	Wire the MPU6050 as follows:
	•	VCC → Connect to 3.3V pin on the Arduino.
	•	GND → Connect to GND pin on the Arduino.
	•	SCL → Connect to A5 pin on the Arduino (Uno) or 21 (Mega).
	•	SDA → Connect to A4 pin on the Arduino (Uno) or 20 (Mega).

Example:
	•	VCC → 3.3V
	•	GND → GND
	•	SCL → A5
	•	SDA → A4

⸻

3. Connecting the Servo Motors

You will have up to five servo motors to control the robotic arm’s shoulder, elbow, wrist, and gripper. Each servo motor has three wires:
	•	Signal wire (yellow or white) → Connect to a PWM pin on the Arduino:
	•	Shoulder → Pin 9
	•	Elbow → Pin 10
	•	Wrist → Pin 11
	•	Gripper → Pin 12
	•	Optional servo → Pin 13
	•	Power wire (red) → Connect to an external 5V power supply.
	•	Ground wire (black or brown) → Connect to the GND pin of the external power supply AND to the Arduino’s GND.

Example:
	•	Shoulder servo → Signal to Pin 9, Power to 5V, Ground to GND
	•	Repeat for the other servo motors

⸻

4. Power and Ground Setup
	•	Connect the grounds of all the servo motors to the Arduino’s GND pin.
	•	Power the servo motors using an external 5V power supply (do NOT power them directly from the Arduino).
	•	Link the external power supply’s ground to the Arduino’s ground to create a common ground — this prevents voltage drops and interference.

⸻

5. Final Check
	1.	Ensure all the sensor and servo connections are secure.
	2.	Confirm the MPU6050 is properly communicating with the Arduino.
	3.	Double-check the ground and power connections.

⸻

✅ How It Works:
	•	The flex sensors detect finger bending and send that data to the Arduino.
	•	The MPU6050 measures the tilt and rotation of your hand.
	•	The Arduino processes the input and adjusts the servo motors, which control the robotic arm’s movement.

⸻

