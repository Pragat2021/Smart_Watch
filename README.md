ESP32 Health Monitor

# Overview
 * The ESP32 Health Monitor is an embedded system designed to measure and report vital health metrics, specifically heart rate and blood oxygen saturation (SpO2) levels, using the MAX30100 pulse oximeter sensor. 
 * The system displays real-time data on an OLED screen and periodically sends email notifications with the readings.

# Features:

* Heart Rate Monitoring: Measures heart rate in beats per minute (bpm).
* SpO2 Monitoring: Measures blood oxygen saturation levels as a percentage.
* OLED Display: Real-time display of heart rate and SpO2 readings.
* Email Notifications: Sends periodic email updates with health readings.
* Wi-Fi Connectivity: Connects to Wi-Fi for sending emails.
* Beat Detection Alert: Notifies each heartbeat detected via Serial Monitor.
# Components:
 * ESP32: The microcontroller used for processing and connectivity.
 * MAX30100: Pulse oximeter sensor for heart rate and SpO2 measurements.
 * Adafruit SSD1306: OLED display for showing real-time data.
 * ESP Mail Client Library: For handling SMTP and sending emails.

# Circuit Diagram :
(Include a detailed circuit diagram here, showing connections between the ESP32, MAX30100, and the OLED display)

=> Installation: 
 # Hardware Setup
  * Connect the MAX30100 sensor to the ESP32:
        -> VCC to 3.3V
        -> GND to GND
        -> SCL to GPIO 22 (default I2C SCL on ESP32)
        -> SDA to GPIO 21 (default I2C SDA on ESP32)
  * Connect the Adafruit SSD1306 OLED display to the ESP32:
        -> VCC to 3.3V
        -> GND to GND
        -> SCL to GPIO 22
        -> SDA to GPIO 21
# Software Setup
  * Install Arduino IDE: Download and install the Arduino IDE from Arduino website.

# Install Required Libraries:
       -> Go to Sketch -> Include Library -> Manage Libraries and install the following:
       -> Adafruit GFX Library
       -> Adafruit SSD1306
       -> ESP Mail Client
       -> MAX30100 Pulse Oximeter
       
# Configure Wi-Fi and SMTP Credentials:

      -> Update the ssid and password variables with your Wi-Fi credentials.
      -> Update the smtp_user and smtp_password variables with your Gmail account and app-specific password.

#Upload the Code:

      ->Open the ESP32_Health_Monitor.ino file in the Arduino IDE.
      ->Select the appropriate board (ESP32 Dev Module) and port.
      ->Click Upload to flash the code to your ESP32.

# Usage:
      ->Power Up: Connect the ESP32 to a power source.
      ->Wi-Fi Connection: The device will attempt to connect to the configured Wi-Fi network.

# Readings Display: 
      ->Once connected, the OLED display will show real-time heart rate and SpO2 readings.
# Email Notifications: 
      ->The system will send email notifications every 30 seconds with the current readings.
