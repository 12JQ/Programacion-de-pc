#include <stdio.h>

float radio=0;
float phi=3.1416;
float perimetro=0;
float area=0;

int main(){

    printf("ingrese el radio del circulo \n");
    scanf("%f", &radio);

    perimetro = 2 * phi * radio;

    area = phi * radio * radio;
    printf("el área del circulo es %f y el perímetro es %f", area, perimetro);
    return 0;
}