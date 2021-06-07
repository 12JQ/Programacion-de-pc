#include <stdio.h>

float valor=0;

int numero1=0;

int divisores=0;

int numerillo=0;

int main() {

 printf("números primos menores a un número\n \n");

 printf("ingrese un número\n \n");

 scanf("%d", &numero1);

 printf("los números primos menores a %d son:\n \n", numero1);

for(int j=1; j<numero1; j++){

  numerillo=j;

for(int i=1; i<=numerillo; i++){

valor=(numerillo%i);

if(valor!=0){

  continue;
  
}

divisores=divisores+1;

}

if(divisores==2){

printf("%d \n \n", numerillo);

}

divisores=0;

}

return 0;

}