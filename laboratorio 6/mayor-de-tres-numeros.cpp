#include <stdio.h>

int numero1=0;
int numero2=0;
int numero3=0;

int main() {
 printf("ingrese un número \n");
 scanf("%d", &numero1);

 printf("ingrese un segundo número \n");
 scanf("%d", &numero2);

 printf("ingrese un tercer número \n");
 scanf("%d", &numero3);

 if (numero1>numero2 && numero1>numero3){
    printf("el primer número ingresado (%d) es mayor que los restantes ingresados (%d y %d) \n", numero1, numero2, numero3);
 }
 else if (numero2>numero1 && numero2>numero3){
    printf("el segundo número ingresado (%d) es mayor que los restantes ingresados (%d y %d) \n", numero2, numero1, numero3);
 }
 else if (numero3>numero1 && numero3>numero2){
    printf("el tercer número ingresado (%d) es mayor que los restantes ingresados (%d y %d) \n", numero3, numero1, numero2);
 }

 else if (numero1==numero2){
    printf("el primer y segundo número ingresado (%d y %d) son iguales \n", numero1, numero2);
 }
else if (numero2==numero3){
    printf("el segundo y tercer número ingresado (%d y %d) son iguales\n", numero2, numero3);
 }
 else if (numero3==numero1){
    printf("el primer y tercer número ingresado (%d y %d) son iguales\n", numero1, numero3);
 }
 else{
   printf("todos los números ingresados son iguales (%d, %d y %d)\n", numero1, numero3, numero2);
 }
  return 0;
}