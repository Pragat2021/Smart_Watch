#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "MAX30100_PulseOximeter.h"
#include <ESP_Mail_Client.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);
PulseOximeter pox;
SMTPSession smtp;
SMTP_Message message;

const char* ssid = "Your_SSID";
const char* password = "Your_PASSWORD";
const char* smtp_server = "smtp.gmail.com";
const int smtp_port = 465;
const char* smtp_user = "your_email@gmail.com";
const char* smtp_password = "your_app_password";

Session_Config session_config;
