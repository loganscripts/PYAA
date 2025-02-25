import serial

arduino = serial.Serial('COM3', 9600)  # Change COM3 to your port

while True:
    data = arduino.readline().decode().strip()
    print("Flex Sensor Data:", data)
