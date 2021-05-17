#include <stdio.h>
int contraseña = 0;
int contraseñacorrecta = 20997649;
int denegado = 3;

int main() {
 printf("ingrese su contraseña (RUT sin digito verificador) \n");
 scanf("%d", &contraseña);

 if (contraseñacorrecta==contraseña){
   printf("contraseña correcta, bienvenid@ \n");

 }
 else{
   denegado=denegado-1;
   printf("contraseña incorrecta, vuelva a intentarlo, quedan %d intento(s)\n", denegado);
   scanf("%d", &contraseña);

  if (contraseñacorrecta==contraseña){
   printf("contraseña correcta, bienvenid@ \n");
    }
  else{
   denegado=denegado-1;
   printf("contraseña incorrecta, vuelva a intentarlo, quedan %d intento(s)\n", denegado);
   scanf("%d", &contraseña);
   
    if(denegado == 1){
    printf("contraseña incorrecta, acceso denegado \n");
     } 

  }

 }
 
 return 0;
 }