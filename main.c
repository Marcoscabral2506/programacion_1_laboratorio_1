#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

int main()
{
    int edad;
    int legajo;
    int nota;

    edad= pedirEntero("Ingrese edad: ", 18, 60);

    legajo= pedirEntero("Ingrese legajo: ", 1, 2000);

    nota= pedirEntero("Ingrese nota: ", 1, 10);

    printf("La edad es %d, el legajo es %d, y la nota es %d", edad, legajo, nota);

    return 0;
}
