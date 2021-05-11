#include <stdio.h>

float primernumero=0;
float segundonumero=0;
float producto=0;

int main(){

    printf("ingrese un número \n");
    scanf("%f", &primernumero);
    printf("ingrese un segundo número \n");
    scanf("%f", &segundonumero);
    producto = primernumero * segundonumero;
    printf("el producto entre los números ingresados es %f", producto);
    return 0;
} 