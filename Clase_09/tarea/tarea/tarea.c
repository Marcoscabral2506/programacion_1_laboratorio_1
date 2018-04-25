#include "tarea.h"

int buscarLibre(int legajo[], int tam)
{
    int index = -1;
    int i;
    for(i = 0; i < tam; i++)
    {
        if(legajo[i] == 0)
            {
            index = i;
            break;
            }
    }
    return index;
}

int cargarAlumno(int legajo[], char nombre[][20], int nota1[], int nota2[], float promedio[], int tam)
{
    int index ;
    index = buscarLibre(legajo, tam);

    if(index != -1)
        pedirDatos(legajo, nombre, nota1, nota2, promedio, tam, index);

    return index;
}


float calcularPromedio(int nota1, int nota2)
{
    float promedio;
    promedio = (float)(nota1 + nota2) / 2;
    return promedio;
}

void mostrarAlumnos(int legajo[], char nombre[][20], int nota1[], int nota2[], float promedio[], int tam)
{
    int i;
    for(i = 0; i < tam; i++)
    {
        if(legajo[i] != 0)
            printf("Legajo: %d\n Nombre: %s\n 1er nota: %d\n 2da nota: %d\n Promedio: %f\n", legajo[i], nombre[i], nota1[i], nota2[i], promedio[i]);
    }
}

void pedirDatos(int legajo[], char nombre[][20], int nota1[], int nota2[], float promedio[], int tam, int index)
{
    printf("Nombre: ");
    fflush(stdin);
    gets(nombre[index]);
    printf("Legajo: ");
    scanf("%d", &legajo[index]);
    printf("1era nota: ");
    scanf("%d", &nota1[index]);
    printf("2da nota: ");
    scanf("%d", &nota2[index]);
    promedio[index] = calcularPromedio(nota1[index], nota2[index]);
}

int buscarAlumno(int alumno, int* legajo, int len)
{
    int i;
    int index = -1;
    for(i = 0; i < len; i++)
    {
        if(legajo[i] == alumno)
        {
            index = i;
            break;
        }
    }
    return index;
}
