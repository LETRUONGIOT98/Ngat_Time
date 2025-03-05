

void setup() {
  Serial.begin(115200); // Khởi tạo UART 0
  Serial2.begin(9600); // Khởi tạo UART 2 với tốc độ baud 9600, sử dụng chân GPIO 16 là RX và GPIO 17 là TX
}

void loop() {
  if (Serial2.available()) { // Kiểm tra xem có dữ liệu nhận được trên UART 2 không
    String receivedData = Serial2.readStringUntil('\n'); // Đọc dữ liệu từ UART 2 cho đến khi gặp ký tự '\n'
    Serial.print("Received: ");
    Serial.println(receivedData); // In dữ liệu nhận được ra UART 0

    if (receivedData == "Xin chao") { // Nếu nhận được chuỗi "Xin chào"
      Serial2.println("Đã nhận"); // Trả lời lại chuỗi "Đã nhận" qua UART 2
    }
  }
}
