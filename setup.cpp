void setup() {
    Serial.begin(115200);
    WiFi.begin(ssid, password);
    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }
    setupSMTPConfig();
    if (!pox.begin()) {
        while (true);
    }
    pox.setIRLedCurrent(MAX30100_LED_CURR_7_6MA);
    pox.setOnBeatDetectedCallback(onBeatDetected);
    if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
        while (true);
    }
    display.clearDisplay();
}
