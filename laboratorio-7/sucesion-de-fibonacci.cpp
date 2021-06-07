#include <stdio.h>

int valorA=0;

int valorB=1;

int resultado=0;

int numero1=0;

int main() {

 printf("sucesión de Fibonacci\n \n");

 printf("ingrese la cantidad de elementos de la sucesión que quiera ver \n(los elementos iniciales vienen por defecto)\n \n");

 scanf("%d", &numero1);

 printf("la sucesión es:\n \n");

 printf("%d\n \n", valorA);

 printf("%d\n \n", valorB);

for(int i=0; i<numero1; i++){

resultado = valorA + valorB;

valorA=valorB;

valorB=resultado;

printf("%d\n \n", resultado);

}

return 0;
}