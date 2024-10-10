

// definição da ponte h
#define FontRightWheel_Foward  24 // laranja
#define FrontRightWheel_Backwards  26 // amarelo
#define FrontLeftwheel_Foward 30 // roxo
#define FrontLeftWheel_Backwards 28 // vermelho
#define BackRightWheel_Foward 52// verde
#define BackRightWheel_Backwards 46 // azul
#define BackLeftWheel_Foward 48 // neon 
#define BackLeftWheel_Backwards 50 // cinza
#define ENA 11 //frente esquerdo                           
#define ENB 12 //frente direito 
#define ENC 10 //tras esquerdo (ENB)
#define END 9 //tras direito (ENA) 

// definição dos sensores
#define sensorR A3 // verde
#define sensorCR A5 // azul
#define sensorCL A2 // amarelo
#define sensorL A4 // roxo
// the setup function runs once when you press reset or power the board

 int sright, sleft;
 int scenterright, scenterleft;     
 int white = 300;
 int black = 500;


void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(9600);
  pinMode(FontRightWheel_Foward, OUTPUT);
  pinMode(FrontRightWheel_Backwards, OUTPUT);
  pinMode(FrontLeftwheel_Foward, OUTPUT);
  pinMode(FrontLeftWheel_Backwards, OUTPUT);
  pinMode(BackRightWheel_Foward, OUTPUT);
  pinMode(BackRightWheel_Backwards, OUTPUT);
  pinMode(BackLeftWheel_Foward, OUTPUT);
  pinMode(BackLeftWheel_Backwards, OUTPUT);

  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(ENC, OUTPUT);
  pinMode(END, OUTPUT);

  pinMode(sensorR, INPUT);
  pinMode(sensorCR, INPUT);
  pinMode(sensorCL, INPUT);
  pinMode(sensorL, INPUT);
  
}

void loop() { 
  
//foward();
//LeftSpinningFast();
  analogLine();
  lerSensores();
  //wheelsTest();
  mostrarSensores();
  delay(100);
}
  /*foward();
  delay(1000);
  RightTurning();
  delay(1000);
  LeftTurning();
  delay(1000);
  backwards();
  delay(1000);
  RightSpinningFast();
  delay(1000);
  LeftSpinningFast();
  delay(1000);
  foward();
  delay(1000);
  RightCrabWalk();
  delay(1000);
  LeftCrabWalk();
  }*/
  
// HIGH + HIGH = quando os dois forem pretos o robo continua a andar 
// LOW + LOW = quando os dois forem brancos o robo continua a andar 
