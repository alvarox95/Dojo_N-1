# Dojo_N-1

![ArduinoTinkercad](https://user-images.githubusercontent.com/99840908/233510660-158b98aa-67e9-4791-9339-8779df31c734.jpg)

## Integrantes

- Ezequiel Naveiro
- Matías Olivera
- Emmanuel Maciel
- Julian Alurralde
- Alvaro Medici

## Proyecto: Semaforo Para No Videntes

![image](https://user-images.githubusercontent.com/99840908/233511541-da542f5d-35ea-4a9c-8105-33f33c1db015.png)

## Descripcion: 

Crear un semaforo y con funcionalidad para personas no videntes

## Funcion Principal

El semáforo consta de tres estados: verde, amarillo y rojo. Cada estado dura un cierto tiempo, que se puede modificar a través de las variables tiempoVerde, tiempoAmarillo y tiempoRojo. Durante cada estado, los LEDs correspondientes se encienden y se apagan, y el zumbador emite un pitido.

## Funciones utilizadas
El código utiliza dos funciones:

~~~ C (lenguaje en el que esta escrito)
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
  {tone(pin, 1000, duracionBeep);
    delay(duracionBeep);
    noTone(pin);
    delay(duracionBeep);
  } 
  }
}
~~~

## :rage1: Link al proyecto
- [Proyecto](https://www.tinkercad.com/things/ajZCUOSbUis-ingenious-krunk-hillar/editel?sharecode=HyMGJVDGCCbBQA1KGuteHUzsFk9MEPF2FEtG7YAPzyA)
