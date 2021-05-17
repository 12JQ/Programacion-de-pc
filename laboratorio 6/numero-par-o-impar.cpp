#include <stdio.h>

int numero=0;
float valor=0;

int main() {
 printf("ingrese un número\n");
 scanf("%d", &numero);
valor=(numero%2);
if((valor)==0){
  printf("el número %d es par\n", numero);
}
else{
  printf("el número %d es impar\n", numero);
}
return 0;
}