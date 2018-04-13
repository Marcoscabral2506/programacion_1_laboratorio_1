#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palabra1[15];             //uno mas de lo que pida para el /0 si uso 10 letras pongo 11
    char palabra2[15];
    char buffer[1024];
    int i;
    int cantidad;
    int comp;

    printf("Ingrese una palabra: ");
    fflush(stdin);
    gets(buffer);

    while(strlen(buffer)>14)
    {
        printf("Reingrese una palabra: ");
        fflush(stdin);
        gets(buffer);
    }
   //cuenta la cantidad de caracteres que hay en cadena

           //destino, origen
    strcpy(palabra1, buffer); //copia una cadena en otra

    strcpy(palabra2, "GATO");

    strupr(palabra1);//convierte todo a mayuscula
    strlwr(palabra2); //todo a minuscula

    strcat(buffer,palabra2);//concatena LOROGATO
    strcat(buffer,palabra1);

    comp=stricmp(palabra1, palabra2);        //compara strcmp minuscula y mayuscula
    //stricmp ordenar alfabetizamente compara sin importar minuscula y mayuscula

    printf("\nla comparacion es %d\n", comp);

    printf("Palabra1: %s\nPalabra2: %s ---- buffer %s", palabra1, palabra2, buffer);

    return 0;
}
