# Smart Train Sensor 🚉

An IoT-based train sensor system using ESP32 for railway safety monitoring.  
This project demonstrates automatic train detection and gate control using sensors, with both hardware and online simulation support.

---

## 📖 Overview
The Smart Train Sensor system detects train movement using IR/Ultrasonic sensors and controls a railway crossing gate automatically. It is designed to improve safety at railway crossings and can be tested in real-time using Wokwi simulation.

---

## 🛠 Features
- Train detection with IR/Ultrasonic sensors
- Automatic gate control using servo motor
- Real-time simulation on Wokwi
- Easy to replicate and extend for larger systems
- Modular design for educational and practical use

---

## 🔗 Simulation
Run the project online here: [Wokwi Simulation](https://wokwi.com/projects/457378695549015041)

---

## ⚙️ Hardware Requirements
- ESP32 board
- IR/Ultrasonic sensor
- Servo motor (for gate control)
- Jumper wires and breadboard
- Power supply (USB or external)

---

## 🖼 Repository Contents
- `Code.c` → Main program logic
- `Circuit.png` → Circuit diagram
- `Output(gate open).png` → Example output when gate is open
- `Output(gate closed).png` → Example output when gate is closed
- `README.md` → Documentation

---

## ▶️ Setup Instructions
1. Clone the repository:
   ```bash
   git clone https://github.com/Deepavastala/Smart-Train-Sensor.git

Open Code.c in Arduino IDE or PlatformIO.

Connect hardware as per Circuit.png.

Upload code to ESP32.

Test with Wokwi simulation or real hardware.

---

## 🔄 How It Works
**Detection**: IR/Ultrasonic sensors continuously monitor the track. When a train approaches, the sensor signal changes.  

**Signal Processing**: The ESP32 reads the sensor input and interprets it as “train detected.”  

**Gate Control**: A servo motor lowers the gate when the train is detected. Once the train passes, the ESP32 raises the gate back to its original position.  

**Simulation**: The process can be tested virtually using Wokwi before hardware deployment.  

---

## 🚀 Future Improvements
- IoT cloud integration for remote monitoring  
- Mobile alerts for crossing status  
- Integration with railway automation systems  
- Data logging for train frequency analysis  

---

## 🌟 Why Is It Useful?
- **Safety First**: Prevents accidents at railway crossings by automating gate control.  
- **Cost-Effective**: Uses affordable sensors and ESP32, making it accessible for educational and practical deployments.  
- **Scalable**: Can be extended to multiple crossings or integrated into larger railway automation systems.  
- **Educational Value**: A great project for students to learn IoT, embedded systems, and real-world safety applications.  
- **Simulation Ready**: Wokwi integration allows testing without hardware, reducing errors before deployment.  

