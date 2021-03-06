#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprimirLista();
void imprimirAccion();
void crearArchivo();
void agregarContacto();
void eliminarContacto();
void eliminarArchivo();
void revisar();

//-------------funcion-principal---------------
int main(){

    int opcion;

    imprimirAccion();
    scanf("%d", &opcion);

    while((opcion > 0) && (opcion < 8)){
        switch(opcion){
            case 1: 
                    // system("dir"); // Windows
                    imprimirLista();
                    break;

            case 2: 

                    crearArchivo();
                    break;

            case 3: 
                    imprimirLista();
                    agregarContacto();
                    break;

            case 4: 
                    imprimirLista();
                    eliminarContacto();
                    break;

            case 5: 
                    imprimirLista();
                    eliminarArchivo();
                    break;

            case 6: 
                    imprimirLista();
                    revisar();
                    break;

            case 7: 
                    printf("adiós\n");
                    
                    break;
        }
        break;
    }


    return 0;
}

//--------------funciones------------------

void imprimirLista(){

  printf("Los archivos disponibles son:\n");
                    system("ls *.txt");
}
void imprimirAccion(){
    
    printf("--- AGENDA CONTACTOS ---\n");
    printf("1.- Listar agendas\n");
    printf("2.- Crear agenda\n");
    printf("3.- Añadir un registro en una agenda\n");
    printf("4.- Eliminar un registro en una agenda\n");
    printf("5.- Eliminar una agenda\n");
    printf("6.- Revisar una agenda\n");
    printf("7.- Salir\n");
    printf("Seleccione una opción:\n");

}

void crearArchivo(){

  char nombreArchivo[30];
  FILE* archivo;

  printf("Ingrese el nombre del archivo que quiere crear:\n");    
                    scanf("%s", nombreArchivo);
                    strcat(nombreArchivo, ".txt");
                    archivo = fopen(nombreArchivo, "w");
                    fclose(archivo);
}

void agregarContacto(){

  char nombreArchivo[30];
  FILE* archivo;
  char nombre[15];
  char apellido[20];
  char telefono[20];


  printf("Ingrese el nombre del archivo donde quiere agregar un registro:\n");
                    scanf("%s", nombreArchivo);
                    strcat(nombreArchivo, ".txt");
                    archivo = fopen(nombreArchivo, "a+");
                    printf("Ingrese el nombre del contacto:\n");
                    scanf("%s", nombre);
                    printf("Ingrese el apellido del contacto:\n");
                    scanf("%s", apellido);
                    printf("Ingrese el teléfono del contacto:\n");
                    scanf("%s", telefono);
                    fprintf(archivo, "%s %s %s\n", nombre, apellido, telefono);
                    fclose(archivo);
}

void eliminarContacto(){

    char nombreArchivo[30];
    FILE* archivo;
    FILE* archivo_temp;
    char nombre[15];
    char contactoEliminar[15];
    char apellido[20];
    char telefono[20];

  printf("Ingrese el nombre del archivo donde quiere eliminar un registro:\n");
                    scanf("%s", nombreArchivo);
                    strcat(nombreArchivo, ".txt");
                    archivo = fopen(nombreArchivo, "r");

                    while(!feof(archivo)){
                        fscanf(archivo, "%s %s %s\n", nombre, apellido, telefono);
                        printf("%s %s %s\n", nombre, apellido, telefono);
                    }

                    printf("Ingrese el nombre del contacto que quiere eliminar:\n"); 
                    scanf("%s", contactoEliminar);
                    rewind(archivo);
                    archivo_temp = fopen("tmp.txt", "w");

                    while(!feof(archivo)){
                        fscanf(archivo, "%s %s %s\n", nombre, apellido, telefono);
                        if(strcmp(contactoEliminar, nombre) == 0){
                            // ES
                        } else {
                            // NO ES
                            fprintf(archivo_temp, "%s %s %s\n", nombre, apellido, telefono);
                        }
                    }

                    fclose(archivo);
                    remove(nombreArchivo);
                    rename("tmp.txt", nombreArchivo);


}

void eliminarArchivo(){
    
    char nombreArchivo[30];
    FILE* archivo;

  printf("Ingrese el nombre del archivo que quiere eliminar:\n");
                    scanf("%s", nombreArchivo);
                    strcat(nombreArchivo, ".txt");
                    remove(nombreArchivo);

}

void revisar(){

  char nombreArchivo[30];
  FILE* archivo;
  char nombre[15];
  char apellido[20];
  char telefono[20];

  printf("Ingrese el nombre del archivo que quiere revisar:\n");
                    scanf("%s", nombreArchivo);
                    strcat(nombreArchivo, ".txt");
                    archivo = fopen(nombreArchivo, "r");
                    while(!feof(archivo)){
                        fscanf(archivo, "%s %s %s\n", nombre, apellido, telefono);
                        printf("%s %s %s\n", nombre, apellido, telefono);
                    }

}