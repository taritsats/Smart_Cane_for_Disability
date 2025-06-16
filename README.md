# smart-cane-for-disability
Smart Cane for Disability is a smart assistive device designed for visually impaired individuls. This project utilies ultrasonic sensors to detect obstacles in real time and provides alerts via vibration and sound. Developed as part of an Embedded System course project.

# Features
- Real-time obstacle detection
- Alerts using buzzer and vibration motor
- Power management via automatic sleep mode
- Lightweight and energy-efficient design

# Background
In Malang, Indonesia, many visually impaired individuals face difficulties when walking, as guiding blocks are often obstructed by pots, poles, or parked vehicles. This creates dangerous situations and impedes mobility. A smart cane that detects obstacles and warns the user is highly needed.

# System Overview
The system is built using an Arduino Uno adn powered by a 9V battery. It uses an HC-SR04 ultrasonic sensor to detect nearby obstacles. If an object is detected within a predefined distance, the buzzer and vibration motor are activated. The device includes a low-power feature to automatically enter sleep mode when not in use.

# Components
- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- Buzzer
- Vibration Motor
- 9V Battery
- Jumper Wires ( F to M, M to M, F to F)
- Breadboard (optional)

# Schematic Diagram
![WhatsApp Image 2025-06-02 at 22 15 19_93b6ac21](https://github.com/user-attachments/assets/a214facf-546f-44d4-b1bd-95fb095cb059)

# How It Works
1. When the device is powered on, the ultrasonic sensor continously emits ultrasonic pulses.
2. These pulses travel through the air and reflect back if they hit an obstacle.
3. The sensor calculates the distance to the object based on the time it takes for the echo to return.
4. If the measured distance is less than the defined threshold (indicating an obstacle is nearby), the system activates both the buzzer and vibration motor.
5. When the device is not in use, it automatically enters a low-power sleep mode to conserve energy.

# Conclusion
Smart Cane for Disability is a practical and affordable solution designed to assist the mobility of visual impaired indivisuals. By utilizing ultrasonic sensors and low-power management features, this device provides real-time obstacle alerts while remaining energy efficient and user-friendly. This project demonstrates how embedded system technology can be applied effectively to meet real-world social needs.

link of demonstration : https://youtu.be/Soeiw_NCmvM?si=7nT8NhB4M8k89hyn

# Authors
1. Taritsa Tsalitsatus Sholihah  - 235150301111023
2. Hanna Lailatul Islamiyah      - 235150301111024
3. Margaretha Eka Melani S       - 235150307111017
4. Muhammad Rasyid H             - 235150307111037
5. Abdul Hakim Sidik Lessy       - 235150319111001
