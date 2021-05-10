#include <stdio.h>

int primernumero=0;
int segundonumero=0;
int suma=0;

int main(){

    printf("ingrese un número \n");
    scanf("%i", &primernumero);
    printf("ingrese un segundo número \n");
    scanf("%i", &segundonumero);
    suma = primernumero + segundonumero;
    printf("la suma de los números ingresados es %i", suma);
    return 0;
}