#include <stdio.h>
#include <stdlib.h>

int pedirEntero(char[], int, int);

int validarEntero(int, int, int, char[]);

int main()
{
    int edad;    //18-60
    int legajo;    //1-1000
    int nota;       //1-10

    edad = pedirEntero("Ingrese edad: ", 18, 60); //funciona como el prompt y se guarda

    legajo = pedirEntero("Ingrese legajo: ", 1, 1000);

    nota = pedirEntero("Ingrese nota: ",1, 10);

    printf("La edad es: %d, el legajo es %d, y la nota es %d", edad, legajo, nota);


    return 0;
}
int pedirEntero(char mensaje[], int min, int max)
{
    int numero;

    printf("%s", mensaje);    //para un conjunto de caracteres y oraciones no pongo %c pongo %s//
    scanf("%d", &numero);

    numero = validarEntero(numero, min, max, mensaje);
while(numero<min || numero>max)
    {
        printf("Error: %s", mensaje);
        scanf("%d", &numero);
    }

    return numero;
}
int validarEntero(int dato, int min, int max, char mensaje[])
{
    while(dato<min || dato>max)
    {
        printf("Error: Reingrese %s", mensaje);
        scanf("%d", &dato);
    }

    return dato;
}
