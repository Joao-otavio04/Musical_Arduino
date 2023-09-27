#include <Ultrasonic.h>


int azul = 2; // Led Azul
int vermelho = 3; // Led Vermelho
int tempo = 100; //variável usada para definir o tempo de acionamento do buzzer
int frequencia = 0; //variável usada para armazenar a frequencia que será usada no acionamento do buzzer
unsigned long millisTarefa1 = millis(); //variável que recebe o tempo atual em milissegundos
int temp = 250; //variável usada para definir o tempo de acionamento do led


int doo = 2; // Led Azul
int re = 3; // Led Vermelho
int mi = 4; // Led Verde
int fa = 5; // Led Branco
int sol = 6; // Led Vermelho
int la = 7; // Led Amarelo
int si = 8; // Led Verde
int botao = 9; // Botão
int porta_buz = 10; // Buzzer
int pino_echo = 12; // Pino echo sensor ultrassônico
int pino_trig = 11; // Pino trig sensor ultrassônico


float leitura;
float d;
float d1 = 10;
float d2 = 16;
float d3 = 22;
float d4 = 28;
float d5 = 34;
float d6 = 40;
float d7 = 46;
float d8 = 52;

int porta = "nota";

Ultrasonic sensor_us(pino_trig, pino_echo);


char* do_re_mi[] = {"Do", "Pausa", "Re", "Pausa", "Mi", "Pausa", "Fa", "Repete", "Fa", "Repete", "Fa", "Pausa", "Do", "Pausa", "Re", "Pausa", "Do", "Pausa", "Re", "Repete", "Re", "Repete", "Re", "Pausa", "Do", "Pausa", "Sol", "Pausa", "Fa", "Pausa", "Mi", "Repete", "Mi", "Repete", "Mi", "Pausa", "Do", "Pausa", "Re", "Pausa", "Mi", "Pausa", "Fa", "Repete", "Fa", "Repete", "Fa", "Fim"}; //Do re mi fa fa fa
int duracao_do_re_mi[] = {250, 50, 250, 50, 250, 50, 500, 50, 250, 50, 500, 50, 250, 50, 250, 50, 250, 50, 500, 50, 250, 50, 500, 50, 250, 50, 250, 50, 250, 50, 500, 50, 250, 50, 500, 50, 250, 50, 250, 50, 250, 50, 500, 50, 250, 50, 500, 0};

char* champions_refrao[] = {"Fa#", "Pausa", "Sol", "Repete", "Sol", "Repete", "Sol", "Repete", "Sol", "Repete", "Sol", "Pausa", "Mi", "Pausa", "La", "Pausa", "Fa", "Pausa", "Do", "Pausa", "Mi", "Repete", "Mi", "Pausa", "Fa#", "Repete", "Fa#", "Fim"};
int duracao_champions_refrao[] = {500, 50, 900, 50, 1400, 1000, 500, 50, 1000, 50, 1400, 900, 500, 50, 950, 50, 500, 50, 500, 50, 1400, 500, 300, 50, 1000, 50, 1400, 0};

char* star_wars[] = {"La","Pausa", "La", "Pausa", "La", "Pausa", "Fa", "Do", "La", "Pausa", "Fa", "Do", "La","Pausa","Mi","Pausa","Mi","Pausa","Mi","Pausa","Fa","Do","Sol","Pausa","Fa","Do","La","Pausa","La","Pausa","La","Pausa","La","Pausa","La","Pausa","Sol#","Pausa","Sol","Fa#","Fa","Fa#","Fim"}; //Marcha Imperial
int duracao_star_wars[] = {400, 100, 400, 100, 400, 100, 300, 200, 300, 100, 300, 200, 300, 200, 400, 100, 400, 100, 400, 100, 300, 300, 200, 100 , 300, 300, 200, 200, 400, 50, 400, 50, 400, 50, 400, 50, 300, 50, 300, 200, 200, 200};

char* harry_potter[] = {"Mi", "Pausa", "La", "Pausa", "Do", "Pausa", "Si", "Pausa", "La", "Pausa", "Mi", "Pausa", "Re", "Pausa", "Si", "Pausa", "La", "Pausa", "Do", "Pausa", "Si", "Pausa", "Sol", "Pausa", "La#", "Pausa", "Mi", "Repete", "Mi", "Pausa", "La", "Pausa", "Do", "Pausa", "Si", "Pausa", "La", "Pausa", "Mi", "Pausa", "Fa", "Pausa", "Sol#", "Repete", "Sol#", "Pausa", "Do#", "Pausa", "Sol", "Pausa", "Mi", "Pausa", "Re#", "Repete", "Re#", "Pausa", "Do", "Pausa", "La", "Fim"};
int duracao_harry_potter[] = {400, 50, 600, 50, 200, 50, 400, 50, 800, 50, 400, 50, 1000, 50, 1000, 50, 600, 50, 200, 50, 400, 50, 800, 50, 400, 50, 1000, 1000, 400, 50, 600, 50, 200, 50, 400, 50, 800, 50, 400, 50, 800, 50, 400, 50, 600, 50, 400, 50, 600, 50, 200, 50, 400, 50, 800, 50, 400, 50, 800, 0};


void setup() {
  pinMode(doo, OUTPUT);
  pinMode(re, OUTPUT);
  pinMode(mi, OUTPUT);
  pinMode(fa, OUTPUT);
  pinMode(sol, OUTPUT);
  pinMode(la, OUTPUT);
  pinMode(si, OUTPUT);
  pinMode(porta_buz, OUTPUT);
  Serial.begin(9600);

}


void loop() {
  d = sensor_us.read();
  if (d < d1) {
    tocar(do_re_mi, duracao_do_re_mi);
    digitalWrite(porta_buz, HIGH);
    delay(3000);
  }
  else if (d1 <= d && d <= d2) {
    tocar(champions_refrao, duracao_champions_refrao);
    digitalWrite(porta_buz, HIGH);
    delay(3000);
  }
  else if (d2 <= d && d <= d3) {
    tocar(star_wars, duracao_star_wars);
    digitalWrite(porta_buz, HIGH);
    delay(3000);
  }
  else if (d3 <= d && d <= d4) {
    tocar(harry_potter, duracao_harry_potter);
    digitalWrite(porta_buz, HIGH);
    delay(3000);
  }
  else if (d5 <= d && d <= d6) {
    sirene();
    digitalWrite(vermelho, LOW);
    digitalWrite(azul, LOW);
  }
  else {
  digitalWrite(porta_buz, HIGH);
  }


  Serial.print("Distancia em cm: ");
  Serial.print(d);
  Serial.println();
  delay(10);
}


void tocar(char* mus[], int tempo[]){
  int tom = 0;
  for(int i = 0; mus[i]!="Fim";i++){
    porta_buz = 10;
    if(mus[i] == "Do") tom = 1052, porta = doo;
    if(mus[i] == "Re") tom = 1178, porta = re;
    if(mus[i] == "Mi") tom = 1326, porta = mi;
    if(mus[i] == "Fa") tom = 1402, porta = fa;
    if(mus[i] == "Sol") tom = 1584, porta = sol;
    if(mus[i] == "La") tom = 1774, porta = la;
    if(mus[i] == "Si") tom = 2000, porta = si;

    
    if(mus[i] == "Do#") tom = 1115, porta = doo;
    if(mus[i] == "Re#") tom = 1250, porta = re;
    if(mus[i] == "Fa#") tom = 1486, porta = fa;
    if(mus[i] == "Sol#") tom = 1669, porta = sol;
    if(mus[i] == "La#") tom = 1875, porta = la;

    if(mus[i] == "Pausa") tom = 30000, porta_buz = 1, digitalWrite(porta_buz, HIGH);
    if(mus[i] == "Repete") tom = 30000, porta_buz = 1, digitalWrite(porta_buz, HIGH), porta = 15;

    digitalWrite(porta, HIGH);
    if (tom > 0) {
      tone(porta_buz, tom, tempo[i]);
      delay(tempo[i]);
      digitalWrite(porta_buz, HIGH);
    } 
    else {
      digitalWrite(porta_buz, HIGH);
      delay(tempo[i]);
    }
    digitalWrite(porta, LOW);
  }
}


void led_sirene() {
  if (millis() - millisTarefa1 > temp) { //Se o resultado da subtração de millis() - millisTarefa1 for maior que temp (250 milissegundo)
    digitalWrite(azul, HIGH); //Liga o Led azul
    digitalWrite(vermelho, LOW);
  } else { //Senão
    digitalWrite(azul, LOW); //Desliga o azul
    digitalWrite(vermelho, HIGH); //Liga o Led vermelho
  }
  if ((millis() - millisTarefa1) > (2 * temp)) { //Se o resultado da subtração de millis() - millisTarefa1 for maior que 2 vezes temp (500 milissegundo)
    millisTarefa1 = millis(); //Atribui a millisTarefa1 o valor de millis()
  }
}


void sirene() {
  for (int i = 0; i < 3; i++){
    for (frequencia = 150; frequencia < 1800; frequencia += 1) { //Define frequencia igual a 150; verifica se frequencia é menor que 1800; realiza a soma frequencia = frequencia + 1
      led_sirene(); //Chama a função led_sirene
      tone(porta_buz, frequencia, tempo); //Aciona o led com frequência definida pelo for e tempo igual a 100 milissegundos
      delay(1); //delay de 1 milissegundos
    }
    for (frequencia = 1800; frequencia > 150; frequencia -= 1) { //Define frequencia igual a 1800; verifica se frequencia é maior que 150; realiza a subtração frequencia = frequencia - 1
      led_sirene(); //Chama a função led_sirene
      tone(porta_buz, frequencia, tempo); //Aciona o led com frequência definida pelo for e tempo igual a 100 milissegundos
      delay(1); //delay de 1 milissegundos
    }
  }
}
