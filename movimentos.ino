#define speed 74
#define ajusteA 12
#define ajusteB 0
#define ajusteC 0
#define ajusteD 0
#define ajuste_diagonal 30
#define ajusteslow 40

//Parar
void stop(){
  digitalWrite(FontRightWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontRightWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftwheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW

}

//Frente
void foward() {

  digitalWrite(FontRightWheel_Foward, HIGH);   
  digitalWrite(FrontRightWheel_Backwards, LOW);   
  digitalWrite(FrontLeftWheel_Backwards, LOW);
  digitalWrite(FrontLeftwheel_Foward, HIGH);
  digitalWrite(BackRightWheel_Foward, HIGH);   
  digitalWrite(BackRightWheel_Backwards, LOW);
  digitalWrite(BackLeftWheel_Backwards, LOW);
  digitalWrite(BackLeftWheel_Foward, HIGH); 

  analogWrite(ENA, speed + ajusteA);
  analogWrite(ENB, speed + ajusteB);
  analogWrite(ENC, speed + ajusteC);
  analogWrite(END, speed + ajusteD);
}

//Trás
void backwards() {
  digitalWrite(FontRightWheel_Foward, LOW);   
  digitalWrite(FrontRightWheel_Backwards,HIGH );   
  digitalWrite(FrontLeftwheel_Foward, LOW);   
  digitalWrite(FrontLeftWheel_Backwards, HIGH);   
  digitalWrite(BackRightWheel_Foward, LOW);   
  digitalWrite(BackRightWheel_Backwards, HIGH);   
  digitalWrite(BackLeftWheel_Foward, LOW);   
  digitalWrite(BackLeftWheel_Backwards, HIGH);   

  analogWrite(ENA, speed + ajusteC);
  analogWrite(ENB, speed);
  analogWrite(ENC, speed);
  analogWrite(END, speed);
}

//Lados
void RightTurning() {
  digitalWrite(FontRightWheel_Foward, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontRightWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftwheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftWheel_Backwards, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Foward, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Foward, LOW);   // tur   n the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Backwards, HIGH);   // turn the LED off by making the voltage LOW

  analogWrite(ENA, speed + ajusteC);
  analogWrite(ENB, speed + ajusteB);
  analogWrite(ENC, speed);
  analogWrite(END, speed);
}

void LeftTurning() {
  digitalWrite(FontRightWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontRightWheel_Backwards, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftwheel_Foward, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Backwards, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Foward, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW

  analogWrite(ENA, speed + ajusteC + ajuste_diagonal);
  analogWrite(ENB, speed + ajusteB + ajuste_diagonal);
  analogWrite(ENC, speed + ajuste_diagonal);
  analogWrite(END, speed + ajuste_diagonal);
}

//Lados diagonal
void LeftDiagonal(){
  digitalWrite(FontRightWheel_Foward, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontRightWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftwheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Foward, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW

  analogWrite(ENA, speed + ajusteC + 10);
  analogWrite(ENB, speed + ajusteB + 10);
  analogWrite(ENC, speed + 10);
  analogWrite(END, speed + 10);

}

void RightDiagonal(){
  digitalWrite(FontRightWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontRightWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftwheel_Foward, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Foward, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW

  analogWrite(ENA, speed + ajusteC );
  analogWrite(ENB, speed + ajusteB );
  analogWrite(ENC, speed);
  analogWrite(END, speed);

}
// giro 360 rápido
void LeftSpinningFast(){
  digitalWrite(FontRightWheel_Foward, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontRightWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftwheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftWheel_Backwards, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Foward, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Backwards, HIGH);   // turn the LED off by making the voltage LOW

  analogWrite(ENA, speed + ajusteA + 30);
  analogWrite(ENB, speed + ajusteB + 30);
  analogWrite(ENC, speed + ajusteC + 30);
  analogWrite(END, speed + ajusteD + 30);
  
}

void RightSpinningFast(){
  digitalWrite(FontRightWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontRightWheel_Backwards, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftwheel_Foward, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Backwards, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Backwards, HIGH);   // turn the LED off by making the voltage LOW

  analogWrite(ENA, speed + ajusteA + 30);
  analogWrite(ENB, speed + ajusteB + 30);
  analogWrite(ENC, speed + ajusteC + 40);
  analogWrite(END, speed + ajusteD + 30);
  
}
// giro 360 lento
void LeftSpinningSlow(){
  digitalWrite(FontRightWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontRightWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftwheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftWheel_Backwards, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Backwards, HIGH);   // turn the LED off by making the voltage LOW

  analogWrite(ENA, speed + ajusteC - ajusteslow);
  analogWrite(ENB, speed - ajusteslow);
  analogWrite(ENC, speed - ajusteslow);
  analogWrite(END, speed - ajusteslow);
  
}

void RightSpinningSlow(){
  digitalWrite(FontRightWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontRightWheel_Backwards, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftwheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Backwards, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW

  analogWrite(ENA, speed + ajusteC);
  analogWrite(ENB, speed + ajusteB);
  analogWrite(ENC, speed);
  analogWrite(END, speed);
}

// caranguejo
void LeftCrabWalk(){
  digitalWrite(FontRightWheel_Foward, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontRightWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftwheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftWheel_Backwards, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Backwards, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Foward, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW

  analogWrite(ENA, speed + ajusteC + ajusteB);
  analogWrite(ENB, speed + ajusteB);
  analogWrite(ENC, speed);
  analogWrite(END, speed);
}

void RightCrabWalk(){
  digitalWrite(FontRightWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontRightWheel_Backwards, HIGH);   // turn the LED off by making the voltage HIGH
  digitalWrite(FrontLeftwheel_Foward, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Foward, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Backwards, HIGH);   // turn the LED off by making the voltage LOW

  analogWrite(ENA, speed + ajusteC);
  analogWrite(ENB, speed + ajusteB);
  analogWrite(ENC, speed);
  analogWrite(END, speed);

}