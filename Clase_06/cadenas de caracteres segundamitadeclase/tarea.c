#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombre[15];
    char apellido[15];
    char apellidoyNombre[31];

    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(nombre);

    printf("Ingrese apellido: ");
    fflush(stdin);
    gets(apellido);

    strcpy(apellidoyNombre, apellido);



    printf("%s %s", apellidoyNombre, nombre);

    return 0;

}
