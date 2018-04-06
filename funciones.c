#include "Funciones.h"
#include <stdio.h>
#include <stdlib.h>

int pedirEntero(char mensaje[], int min, int max)
{
    int numero;
    printf("%s", mensaje);
    scanf("%d", &numero);

    while(numero<min || numero>max)
    {
        printf("Error: Reingrese %s", mensaje);
         scanf("%d", &numero);
    }
}
