#include <stdio.h>

int valor=0;

int numero1=0;

int main() {

 printf("sumatoria de números positivos\n \n");

 while(numero1>=0){

 printf("ingrese un número\n \n");

 scanf("%d", &numero1);

 valor=valor+numero1;

 }

 printf("el resultado es: %d\n \n",valor);

return 0;

}