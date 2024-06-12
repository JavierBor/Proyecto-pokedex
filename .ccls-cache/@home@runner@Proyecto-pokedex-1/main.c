#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "TDAs/list.h"
typedef struct {
char nombre[100];
char tipo1[100];
char tipo2[100];
int numeroPokedex;
int generacion;
bool legendario;

} tipoPokemon;
/*
void limpiarPantalla() { system("clear"); }
void presioneTeclaParaContinuar() {
  puts("Presione una tecla para continuar...");
  getchar(); 
  getchar(); 
}
*/
void cargar_pokemon(Map *nombrePokemon, Map *tipoPokemon, Map *numeroPokemon, Map *generacionPokemon)
{
  FILE *archivo = fopen("Pokemon.csv", "r");
  if (archivo == NULL) {
    perror("Error al abrir el archivo"); 
    return;
  }
  char **campos;
  
  campos = leer_linea_csv(archivo, ','); 
  

  while ((campos = leer_linea_csv(archivo, ',')) != NULL) {
    tipoPokemon *pokemon = (tipoPokemon *)malloc(sizeof(tipoPokemon));

  }
  
}

void mostrarMenu(){
  printf("========================================\n");
  printf("     MENU PRINCIPAL\n");
  printf("========================================\n");
  printf("1. Cargar pokémon\n");
  printf("2. Buscar por nombre\n");
  printf("3. Buscar por numero\n");
  printf("4. Buscar por tipo\n");
  printf("5. Buscar por generacion\n");
  printf("6. Salir\n\n");
}
int is_equal_int(void *key1, void *key2) {
  return *(int *)key1 == *(int *)key2; 
}
int is_equal_str(void *key1, void *key2) {
  return strcmp((char *)key1, (char *)key2) == 0;
}


int main(void) {
  printf("Cambio mapas");
  Map *nombrePokemon = map_create(is_equal_str);
  Map *numeroPokemon = map_create(is_equal_int);
  Map *tipoPokemon = map_create(is_equal_str);
  Map *generacionPokemon = map_create(is_equal_int);

  int opcion;
    do{
      mostrarMenu();
      printf("Ingrese su opcion: ");
      scanf("%d", &opcion);
      switch(opcion){
        case 1:
          limpiarPantalla();
          printf("Cargando pokemons...\n");
          presioneTeclaParaContinuar();
           cargar_pokemon(nombrePokemon, numeroPokemon, tipoPokemon, generacionPokemon);
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