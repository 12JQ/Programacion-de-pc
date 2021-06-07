#include <stdio.h>

float valor=0;

int numero1=0;

int main() {

 printf("divisores de un número\n \n");

 printf("ingrese un número\n \n");

 scanf("%d", &numero1);

 printf("los divisores son:\n \n");

for(int i=1; i<=numero1; i++){

valor=(numero1%i);

if(valor!=0){

  continue;

}

  printf("%d \n \n", i);

}

return 0;

}