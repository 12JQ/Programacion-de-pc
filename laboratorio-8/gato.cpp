#include <stdio.h>

char gato[3][3];
int fila;
int columna;
bool ganador = false;
int turnos = 0;

int main() {
printf("+++++  +++  +++++ +++++\n");
printf("+     ++ ++   +   +   +\n");
printf("+ +++ +++++   +   +   +\n");
printf("+   + +   +   +   +   +\n");
printf("+++++ +   +   +   +++++\n\n");

printf("++++++++++++++++++++++++++++++\n");
printf("+ El juego programado en C++ +\n");
printf("++++++++++++++++++++++++++++++\n\n");

for(int i=0; i<3; i++){
  for(int j=0; j<3; j++){
    gato[i][j]= '-';
  }
}
printf("   1     2     3  \n");
printf("      |     |     \n");
printf("1  %c  |  %c  |  %c  \n", gato[0][0], gato[0][1], gato[0][2]);
printf("      |     |     \n");
printf(" -----+-----+-----\n");
printf("      |     |     \n");
printf("2  %c  |  %c  |  %c  \n", gato[1][0], gato[1][1], gato[1][2]);
printf("      |     |     \n");
printf(" -----+-----+-----\n");
printf("      |     |     \n");
printf("3  %c  |  %c  |  %c  \n", gato[2][0], gato[2][1], gato[2][2]);
printf("      |     |     \n\n");

while(!ganador && turnos < 9){
        
        if(turnos%2 == 0){
            printf("+++++++++++++++++++++++++++\n+ Turno actual: Jugador X +\n+++++++++++++++++++++++++++ \n\nIngresa tu jugada de la forma fila,columna:\n\n");
            scanf("%d,%d", &fila, &columna);

            while(gato[fila - 1][columna - 1] != '-'){
            printf("No seas pill@, vuelve a ingresar tu jugada de la forma fila,columna:\n\n");
            scanf("%d,%d", &fila, &columna);


            }
            gato[fila - 1][columna - 1] = 'X'; 
        } else {
            printf("+++++++++++++++++++++++++++\n+ Turno actual: Jugador O +\n+++++++++++++++++++++++++++\n \nIngrese su jugada de la forma fila,columna:\n\n");
            scanf("%d,%d", &fila, &columna);
            while(gato[fila - 1][columna - 1] != '-'){
            printf("No seas pill@, vuelve a ingresar tu jugada de la forma fila,columna:\n\n");
            scanf("%d,%d", &fila, &columna);
            }
            gato[fila - 1][columna - 1] = 'O'; 
        }
printf("   1     2     3  \n");
printf("      |     |     \n");
printf("1  %c  |  %c  |  %c  \n", gato[0][0], gato[0][1], gato[0][2]);
printf("      |     |     \n");
printf(" -----+-----+-----\n");
printf("      |     |     \n");
printf("2  %c  |  %c  |  %c  \n", gato[1][0], gato[1][1], gato[1][2]);
printf("      |     |     \n");
printf(" -----+-----+-----\n");
printf("      |     |     \n");
printf("3  %c  |  %c  |  %c  \n", gato[2][0], gato[2][1], gato[2][2]);
printf("      |     |     \n\n");

        // filas
        if((gato[0][0] == gato[0][1]) && (gato[0][1] == gato[0][2]) && (gato[0][0] != '-')){
            printf("El ganador es el jugador %c\n\n ¡felicidades!", gato[0][0]);
            ganador = true;
        }
        if((gato[1][0] == gato[1][1]) && (gato[1][1] == gato[1][2]) && (gato[1][0] != '-')){
            printf("El ganador es el jugador %c\n\n ¡felicidades!", gato[1][0]);
            ganador = true;
        }
        if((gato[2][0] == gato[2][1]) && (gato[2][1] == gato[2][2]) && (gato[2][0] != '-')){
            printf("El ganador es el jugador %c\n\n ¡felicidades!", gato[2][0]);
            ganador = true;
        }

        // COLUMNAS
        if((gato[0][0] == gato[1][0]) && (gato[1][0] == gato[2][0]) && (gato[0][0] != '-')){
            printf("El ganador es el jugador %c\n\n ¡felicidades!", gato[0][0]);
            ganador = true;
        }

        if((gato[0][1] == gato[1][1]) && (gato[1][1] == gato[2][1]) && (gato[0][1] != '-')){
            printf("El ganador es el jugador %c\n\n ¡felicidades!", gato[0][1]);
            ganador = true;
        }
        if((gato[0][2] == gato[1][2]) && (gato[1][2] == gato[2][2]) && (gato[0][2] != '-')){
            printf("El ganador es el jugador %c\n\n ¡felicidades!", gato[0][2]);
            ganador = true;
        }

        //diagonales

        if((gato[0][0] == gato[1][1]) && (gato[1][1] == gato[2][2]) && (gato[0][0] != '-')){
            printf("El ganador es el jugador %c\n\n ¡felicidades!", gato[0][0]);
            ganador = true;
        }
        if((gato[0][2] == gato[1][1]) && (gato[1][1] == gato[2][0]) && (gato[0][2] != '-')){
            printf("El ganador es el jugador %c\n\n ¡felicidades!", gato[0][2]);
            ganador = true;
        }
        
turnos++;
}
if(ganador == false && turnos == 9){
          printf("+++++++++++++++++++++++++\n");
          printf("+ Fin del juego, Empate +\n");
          printf("+++++++++++++++++++++++++\n");
        }
return 0;
}