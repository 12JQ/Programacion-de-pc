#include <stdio.h>

float valor=0;

int main() {

 printf("números pares entre 0 y 100\n \n");

for(int i=1; i<100; i++){

valor=(i%2);

if(valor!=0){

  continue;
}

  printf("%d \n \n", i);
}

return 0;
}