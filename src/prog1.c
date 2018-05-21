/* Prog1.c -- Anuncio en pantalla de "Soy una simple computadora." */
// domingo 2018 mayo 20.

#include <stdio.h>

int main (void)                   // Inicio del programa principal (main)
{
  int num;                        // Se define una variable tipo entero

  num = 1;                        // Se asigna un valor a la variable

  printf("Soy una simple ");      // Uso de la función 'printf'
  printf("computadora.\n");
  printf("Mi nùmero favorito es %d porque es el primero.\n", num);

  return 0;
}
