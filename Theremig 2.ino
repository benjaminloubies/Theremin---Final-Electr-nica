//NOTAS//
  //DEFINICION NOTAS//
    #define NOTE_B0 31
    #define NOTE_C1 33
    #define NOTE_CS1 35
    #define NOTE_D1 37
    #define NOTE_DS1 39
    #define NOTE_E1 41
    #define NOTE_F1 44
    #define NOTE_FS1 46
    #define NOTE_G1 49
    #define NOTE_GS1 52
    #define NOTE_A1 55
    #define NOTE_AS1 58
    #define NOTE_B1 62
    #define NOTE_C2 65
    #define NOTE_CS2 69
    #define NOTE_D2 73
    #define NOTE_DS2 78
    #define NOTE_E2 82
    #define NOTE_F2 87
    #define NOTE_FS2 93
    #define NOTE_G2 98
    #define NOTE_GS2 104
    #define NOTE_A2 110
    #define NOTE_AS2 117
    #define NOTE_B2 123
    #define NOTE_C3 131
    #define NOTE_CS3 139
    #define NOTE_D3 147
    #define NOTE_DS3 156
    #define NOTE_E3 165
    #define NOTE_F3 175
    #define NOTE_FS3 185
    #define NOTE_G3 196
    #define NOTE_GS3 208
    #define NOTE_A3 220
    #define NOTE_AS3 233
    #define NOTE_B3 247
    #define NOTE_C4 262
    #define NOTE_CS4 277
    #define NOTE_D4 294
    #define NOTE_DS4 311
    #define NOTE_E4 330
    #define NOTE_F4 349
    #define NOTE_FS4 370
    #define NOTE_G4 392
    #define NOTE_GS4 415
    #define NOTE_A4 440
    #define NOTE_AS4 466
    #define NOTE_B4 494
    #define NOTE_C5 523
    #define NOTE_CS5 554
    #define NOTE_D5 587
    #define NOTE_DS5 622
    #define NOTE_E5 659
    #define NOTE_F5 698
    #define NOTE_FS5 740
    #define NOTE_G5 784
    #define NOTE_GS5 831
    #define NOTE_A5 880
    #define NOTE_AS5 932
    #define NOTE_B5 988
    #define NOTE_C6 1047
    #define NOTE_CS6 1109
    #define NOTE_D6 1175
    #define NOTE_DS6 1245
    #define NOTE_E6 1319
    #define NOTE_F6 1397
    #define NOTE_FS6 1480
    #define NOTE_G6 1568
    #define NOTE_GS6 1661
    #define NOTE_A6 1760
    #define NOTE_AS6 1865
    #define NOTE_B6 1976
    #define NOTE_C7 2093
    #define NOTE_CS7 2217
    #define NOTE_D7 2349
    #define NOTE_DS7 2489
    #define NOTE_E7 2637
    #define NOTE_F7 2794
    #define NOTE_FS7 2960
    #define NOTE_G7 3136
    #define NOTE_GS7 3322
    #define NOTE_A7 3520
    #define NOTE_AS7 3729
    #define NOTE_B7 3951
    #define NOTE_C8 4186
    #define NOTE_CS8 4435
    #define NOTE_D8 4699
    #define NOTE_DS8 4978

  int cantidadNotas = 8;
  //int cantidadNotas = 13;
  //int notas[] = { NOTE_C5, NOTE_CS5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_GS5, NOTE_B5, NOTE_C6 };  //Escala doble armonica
  //int notas[]={NOTE_E4,NOTE_F4,NOTE_GS4,NOTE_A4,NOTE_B4,NOTE_C4,NOTE_D4,NOTE_E5}; //Escala judia
  //int notas[]={NOTE_C4,NOTE_CS4,NOTE_E4,NOTE_F4,NOTE_G4,NOTE_GS4,NOTE_AS4,NOTE_C5}; // Escala española
  //int notas[]={NOTE_C4,NOTE_DS4,NOTE_F4,NOTE_FS4,NOTE_G4,NOTE_AS4,NOTE_C5,NOTE_DS5}; // Escala blues DO
  //int notas[]={NOTE_A4,NOTE_B4,NOTE_C5,NOTE_D5,NOTE_E5,NOTE_F5,NOTE_G5,NOTE_A5}; // Escala LA menor
  int notas[]={NOTE_C4,NOTE_D4,NOTE_E4,NOTE_F4,NOTE_G4,NOTE_A4,NOTE_B4,NOTE_C5}; // Escala Do mayor
  //int notas[] = { NOTE_C4, NOTE_CS4, NOTE_D4, NOTE_DS4, NOTE_E4, NOTE_F4, NOTE_FS4, NOTE_G4, NOTE_GS4, NOTE_A4, NOTE_AS4, NOTE_B4, NOTE_C5 };  //Escala cromatica

//PINES//
//IR//
  #define IR_1 A0
  #define IR_2 A1
//LEDS//
  #define LED1 8
  #define LED2 9
  #define LED3 10
  #define LED4 11
  #define LED5 12
  #define LED6 13
//BUZZER
  #define BUZZER 5
//SERVO//
  #include <Servo.h>
  Servo Servo1;  //7//
  int abrir;

//VARIABLES// 
  int D1;
  int D2;
  int t;
  float V;    //Variable para volumen//
  int VOL;  //VOLUMEN RESULTANTE//
  int F;
  int C;
  int N;  //Valor en array de notas//
  int Q;

  //LUCES//
  float L;


void LUCES() {
  L = map(D2, 0, 1023, 6, 1);
  if (N == 1) {
     digitalWrite(LED1, HIGH);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
    digitalWrite(LED5, LOW);
       digitalWrite(LED6, LOW);
  } else if (N == 2) {
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
        digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
    digitalWrite(LED5, LOW);
       digitalWrite(LED6, LOW);
  } else if (N == 3) {
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED4, HIGH);
        digitalWrite(LED3, LOW);
    digitalWrite(LED5, LOW);
       digitalWrite(LED6, LOW);
  } else if (N == 4) {
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, HIGH);
    digitalWrite(LED4, HIGH);
       digitalWrite(LED5, LOW);
          digitalWrite(LED6, LOW);
  } else if (N == 5) {
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, HIGH);
    digitalWrite(LED4, HIGH);
    digitalWrite(LED5, HIGH);
              digitalWrite(LED6, LOW);
  } else if (N > 5) {
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, HIGH);
    digitalWrite(LED4, HIGH);
    digitalWrite(LED5, HIGH);
    digitalWrite(LED6, HIGH);
  
  }
}

void BOCA() {
  abrir = map(D2, 0, 1023, 0, 45);
  
  if (D2 < 200){
    Servo1.write(45);
  }
  else{
  Servo1.write(0);
  }}

void MUSICA() {
  VOL = notas[N] / V;

  F = map(D1, 0, 1023, 0, 400);  //Frecuencia//
  Q = cantidadNotas - 1;
  N = map(D1, 0, 1023, 0, Q);  //Seleccion de notat sesgun distancia//
  tone(BUZZER, VOL);
}

void setup() {
  Serial.begin(9600);

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);

  pinMode(BUZZER, OUTPUT);
  Servo1.attach(7);
  delay(1000);
}

void loop() {
  D1 = analogRead(IR_1); //
  D2 = analogRead(IR_2);
  Serial.print(D1);
  Serial.print(" / ");
  Serial.print(D2);
  Serial.print(" / ");
  Serial.print(D2);
  Serial.print(" / ");
  Serial.println(N);
  delay(10);
  V = map(D2, 0, 1023, 1, 5);
  t = map(D2, 0, 1023, 0, 500);

  MUSICA();
  LUCES();
  BOCA();
}