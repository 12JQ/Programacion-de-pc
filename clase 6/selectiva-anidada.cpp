#include <stdio.h>


float nota=0;

int main(){

    printf("Bienvenid@, ingrese la nota del alumn@ \n");

    scanf("%f", &nota);
    
if(nota<=7 && nota>=6){

    printf("muy bien \n");
}
else if(nota<6 && nota>=5){

    printf("bien \n");
}
else if(nota<5 && nota>=4){

    printf("suficiente \n");
}
else {
  printf("insuficiente \n");
}
    return 0;
}