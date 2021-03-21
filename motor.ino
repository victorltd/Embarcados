#include <Servo.h>  //Vou usar a biblioteca de servo pra controlar o esc

Servo esc; //Criei uma classe servo com o nome esc

void setup()

{

esc.attach(8); //Estou dizendo para o arduino onde está conectado o pino de sinal do esc

esc.writeMicroseconds(1000); //Iniciaalizar o sinal em 1000, estará desligado o meu motor

Serial.begin(9600);

}

void loop()

{

int val; //Para armazenar os valores do potenciometro

//val= analogRead(A0); //Read input from analog pin a0 and store in val

//val= map(val, 0, 1023,1000,2000); //tenho que mapear, pois o potenciometro vai só de 0 a 1023, então preciso usar a funca



val=1100;


esc.writeMicroseconds(val); //usando o valor do potenciometro para controlar meu servo
Serial.println(val);

delay(5000);

val=1500;
esc.writeMicroseconds(val); //usando o valor do potenciometro para controlar meu servo
Serial.println(val);


delay(5000);
val=2000;
esc.writeMicroseconds(2000); //usando o valor do potenciometro para controlar meu servo
Serial.println(val);



delay(3000);

}
