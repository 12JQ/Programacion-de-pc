#include <stdio.h>

int numero1=0;

int numero2=0;

int resultado=0;

int main() {

 printf("números pares entre 0 y 100\n \n");

 printf("ingrese el primer número\n \n");

 scanf("%d", &numero1);

 printf("ingrese el segundo número\n \n");

 scanf("%d", &numero2);

for(int i=0; i<numero2; i++){

resultado=resultado+numero1;

}

printf("el resultado es: %d \n \n", resultado);

return 0;

}