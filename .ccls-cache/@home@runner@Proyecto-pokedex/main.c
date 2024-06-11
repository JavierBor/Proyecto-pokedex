#include <stdio.h>


void mostrarMenu(){
  printf("1. Cargar pokémon\n");
  printf("2. Buscar por nombre\n");
  printf("3. Buscar por numero\n");
  printf("4. Buscar por tipo\n");
  printf("5. Buscar por generacion\n");
  printf("6. Salir\n");
}

int main(void) {
int opcion;
  do{
    mostrarMenu();
    printf("Ingrese su opcion: ");
    scanf("%d", &opcion);
    switch(opcion){
      case 1:
        printf("Cargando pokemons...\n");
        break;
      case 2:
        printf("Buscando por nombre...\n");
        break;
      case 3:
        printf("Buscando por numero...\n");
        break;
      case 4:
        printf("Buscando por tipo...\n");
        break;
      case 5:
        printf("Buscando por generacion...\n");
        break;
      case 6:
        printf("Saliendo...\n");
        break;
      default:
        printf("Opcion invalida...\n");
        break;
    }
  }while (opcion != 6);
  return 0;
}