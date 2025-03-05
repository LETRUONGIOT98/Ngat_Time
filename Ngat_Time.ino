#define LED 2
hw_timer_t *My_timer = NULL;
void IRAM_ATTR onTimer(){
digitalWrite(LED, !digitalRead(LED));
Serial.println("DA VAO NGAT");
}
void setup() {
pinMode(LED, OUTPUT);
Serial.begin(115200);
My_timer = timerBegin(0, 80, true);
timerAttachInterrupt(My_timer, &onTimer, true);
timerAlarmWrite(My_timer, 1000000, true);
timerAlarmEnable(My_timer); //Just Enable
}
void loop() {
  int dem;
  for(int i = 0; i <= 1000; i++){
     dem = dem +1;
     Serial.println(dem);
     delay(100);
  }
}
