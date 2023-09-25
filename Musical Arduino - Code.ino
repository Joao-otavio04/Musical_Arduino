#include <Ultrasonic.h>

int doo = 2; // amarelo
int re = 3; // verde
int mi = 4; // vermelho
int fa = 5; // azul
int sol = 6; // branco
int la = 7; // amarelo
int botao = 8; // botão
int porta_buz = 10; // buzzer
int pino_echo = 12; // echo sensor ultrassom
int pino_trig = 11; // trig sensor ultrassom
float leitura;
float d;
float d1 = 15;
float d2 = 30;
float d3 = 45;
int a = 0;
Ultrasonic sensor_us(pino_trig, pino_echo);

char* do_re_mi[] = {"Do", "Pausa", "Re", "Pausa", "Mi", "Pausa", "Fa", "Pausa", "Fa", "Pausa", "Fa", "Pausa", "Do", "Pausa", "Re", "Pausa", "Do", "Pausa", "Re", "Pausa", "Re", "Pausa", "Re", "Pausa", "Do", "Pausa", "Sol", "Pausa", "Fa", "Pausa", "Mi", "Pausa", "Mi", "Pausa", "Mi", "Pausa", "Do", "Pausa", "Re", "Pausa", "Mi", "Pausa", "Fa", "Pausa", "Fa", "Pausa", "Fa", "Fim"}; //Do re mi fa fa fa
int duracao_do_re_mi[] = {250, 50, 250, 50, 250, 50, 500, 50, 250, 50, 500, 50, 250, 50, 250, 50, 250, 50, 500, 50, 250, 50, 500, 50, 250, 50, 250, 50, 250, 50, 500, 50, 250, 50, 500, 50, 250, 50, 250, 50, 250, 50, 500, 50, 250, 50, 500, 0};
int dur[] = {200, 2000, 300, 200, 300, 200, 300, 300, 300, 300, 300, 200, 200, 200, 300, 200, 200, 300, 200, 300, 300, 300, 300, 300, 300, 200, 200, 200, 200, 200, 200, 300, 200, 300, 300, 300, 300, 300, 300, 200, 200, 200, 300, 200, 200, 200, 2500};

void setup() {
    pinMode(doo, OUTPUT);
  pinMode(re, OUTPUT);
  pinMode(mi, OUTPUT);
  pinMode(fa, OUTPUT);
  pinMode(sol, OUTPUT);
  pinMode(la, OUTPUT);
  pinMode(botao, INPUT_PULLUP);
  pinMode(porta_buz, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  
  tocar(do_re_mi, dur);
  digitalWrite(porta_buz, HIGH);
  delay(5000);
}


void acendeapagaled( int porta){
  digitalWrite(porta, HIGH);
  delay(250);
  digitalWrite(porta, LOW);
  //delay(50);
}
void acendeapagaled1( int porta){
  digitalWrite(porta, HIGH);
  delay(250);
  digitalWrite(porta, LOW);
  //delay(50);
}
void acendeapagaled2( int porta){
  digitalWrite(porta, HIGH);
  delay(250);
  digitalWrite(porta, LOW);
  //delay(50);
}


void tocar(char* mus[], int tempo[]){
  int tom = 0;
  for(int i = 0; mus[i]!="Fim";i++){
    //if(mus[i] == "Do") tom = 526.3, acendeapagaled(doo);
    //if(mus[i] == "Re") tom = 589.2, acendeapagaled(re);
    //if(mus[i] == "Mi") tom = 663, acendeapagaled(mi);
    //if(mus[i] == "Fa") tom = 701.1, acendeapagaled1(fa);
    //if(mus[i] == "Sol") tom = 792.4, acendeapagaled(sol);
    //if(mus[i] == "La") tom = 887.2, acendeapagaled(la);

    //if(mus[i] == "Do") tone(porta_buz, 261, tempo[i]),  acendeapagaled(doo), digitalWrite(porta_buz, HIGH);
    //if(mus[i] == "Re") tone(porta_buz, 295, tempo[i]),  acendeapagaled(re), digitalWrite(porta_buz, HIGH);
    //if(mus[i] == "Mi") tone(porta_buz, 330, tempo[i]),  acendeapagaled(mi), digitalWrite(porta_buz, HIGH);
    //if(mus[i] == "Fa") tone(porta_buz, 350, tempo[i]),  acendeapagaled1(fa), digitalWrite(porta_buz, HIGH);
    //if(mus[i] == "Sol") tone(porta_buz, 392, tempo[i]),  acendeapagaled(sol), digitalWrite(porta_buz, HIGH);
    //if(mus[i] == "La") tone(porta_buz, 440, tempo[i]),  acendeapagaled(la), digitalWrite(porta_buz, HIGH);
    
    //if(mus[i] == "Si") tom = 494;
    //if(mus[i] == "Do#") tom = 528;
    //if(mus[i] == "Re#") tom = 622;
    //if(mus[i] == "Fa#") tom = 370;
    //if(mus[i] == "Sol#") tom = 415;
    //if(mus[i] == "La#") tom = 466;

    if(mus[i] == "Do") tom = 261, a = doo;
    if(mus[i] == "Re") tom = 295, a = doo(re;
    if(mus[i] == "Mi") tom = 330, a = doo(mi;
    if(mus[i] == "Fa") tom = 350, a = doo(fa;
    if(mus[i] == "Sol") tom = 392, a = sol;
    if(mus[i] == "La") tom = 440, a = la;



    
    if (mus[i] == "Pausa") digitalWrite(porta_buz, HIGH);

    tone(porta_buz, tom, tempo[i]);
    delay(tempo[i]);
    
  }
}

