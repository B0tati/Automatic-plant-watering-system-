# 🌿 Automatic Plant Watering System  

_A smart system that monitors soil moisture, temperature, and humidity, automatically watering plants when needed. It also includes a mobile app for real-time data monitoring and manual control._ 

## 🛠️ Components Used  
- **Arduino Mega** (or any compatible board)  
- **Capacitive Soil Moisture Sensor V2.0**  
- **DHT11 Sensor**  
- **1 Channel Relay Module**
- **Water Pump**
- **Battery 9V**
- **Breadboard**
- **HC-05 Bluetooth Module**  
- **MIT App Inventor Application**

## 📸 Circuit diagram
![image](https://github.com/user-attachments/assets/d501e5f2-40eb-4924-b834-2d3ca7c681ed)

## 🚀 Features  
- **Monitors Soil Moisture, Temperature, and Humidity**  
- **Automatically waters plants when soil is dry**  
- **Displays live sensor data in the mobile app via Bluetooth**  
- **Manual ON/OFF control of the water pump via the app**  

## 📲 Mobile App (MIT App Inventor)  
- The MIT App allows users to **view live sensor readings** of soil moisture, humidity and temerature, **control the water pump manually** via bluetooth and a list of some plants and thier moisture requiremnets. 
- To use, install the app on your Android device and connect to the **HC-05 Bluetooth module**.
- 📱 **Download the App:**  
🔗 [Automatic Plant Watering System APK](https://github.com/B0tati/Automatic-plant-watering-system-/releases/download/v1.0/Automatic.plant.watering.system.app.apk)

## 📂 Files in This Repository  
📌 **`plant_watering.ino`** - Arduino code for sensor readings & automation  
📌 **`plant_watering_app.aia`** - MIT App Inventor project file  
📌 **`README.md`** - This documentation file  

## 🔌 How to Use  
1. Upload **`plant_watering.ino`** to your Arduino.  
2. Install the **MIT App** on your phone.  
3. Connect to the **HC-05 Bluetooth Module** via the app.  
4. The app will display **real-time data** from the sensors.  
5. If the soil moisture is too low, the pump will turn ON automatically.  
6. You can also **manually control** the pump via the app’s ON/OFF button.  

✨ **Project by Varshini**  
