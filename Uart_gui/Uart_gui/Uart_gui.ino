

void setup() {
  Serial.begin(115200); // Khởi tạo UART 0
  Serial2.begin(9600); // Khởi tạo UART 2 với tốc độ baud 9600, cấu hình 8-N-1, sử dụng chân GPIO 16 là RX và GPIO 17 là TX
}

void loop() {
  Serial2.println("Xin chao"); // Gửi chuỗi "Xin chào" qua UART 2
  delay(1000); // Đợi 1 giây trước khi gửi lại
}
