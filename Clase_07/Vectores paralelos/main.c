#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float calcularPromedio(int, int);
float mostrar(int[], char[][30], int[], int[]);
void ordenar(char nombre[][30]);


int main()
{
    int legajo[3]={100,200,300};
    char nombre[3][30]={"marcos","meli","charli"};
    int nota1[3]={9,8,7};
    int nota2[3]={10,6,8};
    float promedio[3];
    int i;

    for(i=0; i<3; i++)
        {
            /*printf("Ingrese legajo: ");
            scanf("%d", &legajo[i]);

            printf("Ingrese nombre: ");
            fflush(stdin);
            gets(nombre[i]);

            printf("Ingrese nota 1: ");
            scanf("%d", &nota1[i]);

            printf("Ingrese nota 2: ");
            scanf("%d", &nota2[i]);
            promedio[i]=calcularPromedio(nota1[i], nota2[i]);*/


        }

        printf("Legajo - Nombre - Nota 1 - Nota 2 - Promedio\n");
        for(i=0; i<3; i++)
        {
         printf("\n%d -- %s -- %d -- %d ----------- %2.f\n", legajo[i], nombre[i], nota1[i], nota2[i], calcularPromedio(nota1[i], nota2[i]));
        }
        ordenar(nombre[i][30]);

    return 0;
}
float calcularPromedio(int num1, int num2)
{
    float resultado;
    resultado= num1+num2;
    resultado= resultado/2;
    return resultado;

}

void ordenar(char nombre[][30])


{
    int i;
    int j;
    char auxiliar[30];

    for(i=0; i<3; i++)
    {
        for(j=1; j<4; j++)
        {
            printf("test");

            if(strcmp(nombre[i], nombre[j]>0))
            {
                printf("test");
                strcpy(auxiliar, nombre[i]);
                strcpy(nombre[i], nombre[j]);
                strcpy(nombre[j], auxiliar);

            }
        }

    }
}

int buscarInt(int enteros[], int tam, int cual)
{
    int indice= -1;
    int i;
    for(i= 0; i<tam; i++)
    {
        if(enteros[i]==cual)
        {
            indice= i;
            break;
        }

    }
    return indice;
}
