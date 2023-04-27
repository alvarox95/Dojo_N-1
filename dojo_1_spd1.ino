// C++ code
//
#define ROJO_1 13
#define ROJO_2 12
#define ROJO_3 11
#define AMARILLO_1 10
#define AMARILLO_2 9
#define AMARILLO_3 8
#define VERDE_1 7
#define VERDE_2 6
#define VERDE_3 5
#define BUZZER 4


int tiempoVerde = 3;
int tiempoAmarillo = 2;
int tiempoRojo = 3;

void encendidoApagadoLed(int led1,int led2,int led3,int tiempo,int tonoPin,int tiempoTono);
void pitido(int duracion, int pin , int duracionTono);

void setup()
{
  pinMode(ROJO_1, OUTPUT);
  pinMode(ROJO_2, OUTPUT);
  pinMode(ROJO_3, OUTPUT);
  pinMode(AMARILLO_1, OUTPUT);
  pinMode(AMARILLO_2, OUTPUT);
  pinMode(AMARILLO_3, OUTPUT);
  pinMode(VERDE_1, OUTPUT);
  pinMode(VERDE_2, OUTPUT);
  pinMode(VERDE_3, OUTPUT); 
  pinMode(BUZZER, OUTPUT);
  
}

void loop()
{
  encendidoApagadoLed(VERDE_1,VERDE_2,VERDE_3,tiempoVerde,0,0);
  
  encendidoApagadoLed(AMARILLO_1,AMARILLO_2,AMARILLO_3,tiempoAmarillo,BUZZER,1000);
  
  encendidoApagadoLed(ROJO_1,ROJO_2,ROJO_3,tiempoRojo,BUZZER,500);
}

void encendidoApagadoLed(int led1,int led2,int led3,int tiempo,int tonoPin,int tiempoTono)
{
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);

  if (tonoPin != 0) {
    pitido(tiempo, tonoPin, tiempoTono);
  } else {
    delay(tiempo * 1000);
  }
  
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
}

void pitido(int duracion, int pin , int duracionTono)
{
   int duracionBeep = duracionTono/ 2;
  for (int i = 0; i < duracion * 2; i++)
  {
    tone(pin, 1000, duracionBeep);
    delay(duracionBeep);
    noTone(pin);
    delay(duracionBeep);
  } 
  
}
