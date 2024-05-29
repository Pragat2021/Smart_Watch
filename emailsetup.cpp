void sendEmail(float heartRate, float spo2) {
    message.sender.name = "ESP32 Health Monitor";
    message.sender.email = smtp_user;
    message.subject = "Health Monitor Reading";

    String textContent = "Heart rate: " + String(heartRate) + " bpm\nSpO2: " + String(spo2) + "%";
    message.text.content = textContent.c_str();
    message.addRecipient("Recipient Name", "recipient_email@gmail.com");

    int retryCount = 0;
    const int maxRetries = 3;
    bool emailSent = false;

    while (!emailSent && retryCount < maxRetries) {
        smtp.connect(&session_config);
        if (!MailClient.sendMail(&smtp, &message)) {
            retryCount++;
        } else {
            emailSent = true;
        }
        smtp.closeSession();
    }

    if (emailSent) {
        takeReadings = true;
    }
}
