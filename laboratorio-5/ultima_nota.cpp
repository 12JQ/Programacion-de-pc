#include <stdio.h>

float tarea1=0;
float tarea2=0;
float tarea3=0;
float actitudinal=0;
float prueba1=0;
float prueba2=0;
int main(){

    printf("Bienvenid@ a está aplicación para calcular tu nota \n");
    printf("ingrese la nota de la tarea 1 \n");
    scanf("%f", &tarea1);
    printf("ingrese la nota de la tarea 2 \n");
    scanf("%f", &tarea2);
    printf("ingrese la nota de la tarea 3 \n");
    scanf("%f", &tarea3);
    printf("ingrese la nota de la actitudinal \n");
    scanf("%f", &actitudinal);
    printf("ingrese la nota de la prueba 1 \n");
    scanf("%f", &prueba1);

prueba2 = (4.0 -((tarea1 * 0.1) + (tarea2 * 0.1) + (tarea3 * 0.1) + (actitudinal * 0.1) + (prueba1 * 0.25))) / 0.35; 

if(prueba2<=7 && prueba2>=1){

    printf("la nota a sacar en la prueba 2 es un %f\n", prueba2);
}
if(prueba2<1){
   printf("aprobaste, puedes relajarte\n");
}
if(prueba2>7){
  printf("reprobaste nada que hacerle\n");
}
    return 0;
}