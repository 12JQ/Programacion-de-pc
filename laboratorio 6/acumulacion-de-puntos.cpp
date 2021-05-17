#include <stdio.h>

int valor = 0;
int puntos = 0;
int codigo = 0;
int confirmar = 0;


int main() {
  
  printf("ingrese el valor del producto \n");
  scanf("%d", &valor);
  
  printf("ingrese los puntos del usuario \n");
  scanf("%d", &puntos);

  printf("ingrese el codigo del producto \n");
  scanf("%d", &codigo);

  if((puntos*10)>=valor){
    printf("¿Quiere pagar con puntos? si(1) no(0)\n");
  scanf("%d", &confirmar);
  if(confirmar == 1){
    printf("Muchas gracias por comprar aquí\n");
    puntos= puntos-(valor/10);
    printf("ahora cuenta con %d puntos\n", puntos);

  }
  else{
    printf("son $%d\n", valor);

    if(codigo>=100 && codigo<200){
      if(valor<10000){
        puntos= puntos+(valor/100);
        printf("Muchas gracias por comprar aquí\n");
        printf("ahora cuenta con %d puntos\n", puntos);

      }
      else{
        puntos= puntos+(valor/50);
        printf("Muchas gracias por comprar aquí\n");
        printf("ahora cuenta con %d puntos\n", puntos);
      }
    }
    else if (codigo>=200 && codigo<300){
      if(valor<10000){
        puntos= puntos+(valor/50);
        printf("Muchas gracias por comprar aquí\n");
        printf("ahora cuenta con %d puntos\n", puntos);

      }
      else{
        puntos= puntos+(valor/30);
        printf("Muchas gracias por comprar aquí\n");
        printf("ahora cuenta con %d puntos\n", puntos);
      }

    }

  }

  }
    else{
    printf("son $%d\n", valor);

    if(codigo>=100 && codigo<200){
      if(valor<10000){
        puntos= puntos+(valor/100);
        printf("Muchas gracias por comprar aquí\n");
        printf("ahora cuenta con %d puntos\n", puntos);

      }
      else{
        puntos= puntos+(valor/50);
        printf("Muchas gracias por comprar aquí\n");
        printf("ahora cuenta con %d puntos\n", puntos);
      }
    }
    else if (codigo>=200 && codigo<300){
      if(valor<10000){
        puntos= puntos+(valor/50);
        printf("Muchas gracias por comprar aquí\n");
        printf("ahora cuenta con %d puntos\n", puntos);

      }
      else{
        puntos= puntos+(valor/30);
        printf("Muchas gracias por comprar aquí\n");
        printf("ahora cuenta con %d puntos\n", puntos);
      }

    }

  }
 return 0;
}