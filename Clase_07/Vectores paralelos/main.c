#include <stdio.h>
#include <stdlib.h>

float calcularPromedio(int, int);

float mostrar(int[], char[][30], int[], int[]);

int main()
{
    int legajo[3];
    char nombre[3][30];
    int nota1[3];
    int nota2[3];
    float promedio[3];
    int i;

    for(i=0; i<3; i++)
        {
            printf("Ingrese legajo: ");
            scanf("%d", &legajo[i]);

            printf("Ingrese nombre: ");
            fflush(stdin);
            gets(nombre[i]);

            printf("Ingrese nota 1: ");
            scanf("%d", &nota1[i]);

            printf("Ingrese nota 2: ");
            scanf("%d", &nota2[i]);
            promedio[i]=calcularPromedio(nota1[i], nota2[i]);

            mostrar(legajo[i], nombre[i], nota1[i], nota2[i], 3);
        }

        printf("\n ------------LISTA -------------\n");


    return 0;
}
float calcularPromedio(int num1, int num2)
{
    float resultado;
    resultado= num1+num2;
    resultado= resultado/2;
    return resultado;

}
float mostrar(int legajo[], char nombre[], int nota1[], int nota2[], int cantidad)
{
   int i;
   for(i=0; i<cantidad; i++)
        {
         printf("%d5 %s15 %5d %5d", legajo[i], nombre[i], nota1[i], nota2[i]);
        }

}
