unsigned long time_sence_last_reset = 0;
int interval_one = 5000; // 5 secounds, 1st while loop
int interval_two = 3000; // 3 secounds, 2nd while loop

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  delay(150);

}

void loop() {
  // put your main code here, to run repeatedly:
  //1st loop
  time_sence_last_reset = millis();
  while((millis() - time_sence_last_reset) < interval_one){
    Serial.println("Inside 1st while loop");
  }
  Serial.println(""); Serial.println("");
  //2nd while loop
  time_sence_last_reset = millis();
  while((millis() - time_sence_last_reset) < interval_two){
    Serial.println(""); Serial.println("");
  }
  
}
