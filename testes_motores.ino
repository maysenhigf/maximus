  void mostrarSensores(){
   Serial.print(sright);
   Serial.print(" - ");
   Serial.print(scenterright);
   Serial.print(" - ");
   Serial.print(scenterleft);
   Serial.print(" - ");
   Serial.println(sleft);
   delay(10);
 }
   void lerSensores(){
   sright = analogRead(sensorR);
   delay (10);
   scenterright = analogRead(sensorCR);
   delay (10);
   scenterleft  = analogRead(sensorCL);
   delay (10);
   sleft = analogRead(sensorL);
  delay (10);
 }

const int pinosMovimento  [] =  {FontRightWheel_Foward, FrontRightWheel_Backwards, FrontLeftwheel_Foward, FrontLeftWheel_Backwards, BackRightWheel_Foward, BackRightWheel_Backwards, BackLeftWheel_Foward, BackLeftWheel_Backwards, };
  
void wheelsTest(){
  stop();
  
  for (int pino = 0; pino < 8; pino++){
    Serial.print("Testando elemento ");
    Serial.print(pinosMovimento[pino]);
    Serial.print(" Acionando... ");
    digitalWrite(pinosMovimento[pino], HIGH);
    delay (1000);
    Serial.print(" Parando... ");
    digitalWrite(pinosMovimento[pino], LOW);
    Serial.println ("TERMINADO");

}
 /* digitalWrite(FontRightWheel_Foward, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontRightWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftwheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW*/
  }