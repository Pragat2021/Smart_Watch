void loop() {
    if (takeReadings) {
        pox.update();
        float heartRate = pox.getHeartRate();
        float spo2 = pox.getSpO2();

        display.clearDisplay();
        display.setTextSize(1);
        display.setTextColor(SSD1306_WHITE);
        display.setCursor(0, 0);
        display.print("Heart rate: ");
        display.print(heartRate);
        display.print(" bpm");
        display.setCursor(0, 10);
        display.print("SpO2: ");
        display.print(spo2);
        display.print("%");
        display.display();
    }

    if (millis() - lastEmailTime >= emailInterval) {
        lastEmailTime = millis();
        sendEmail(pox.getHeartRate(), pox.getSpO2());
    }
}
