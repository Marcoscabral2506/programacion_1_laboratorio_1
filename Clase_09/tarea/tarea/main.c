#include <stdio.h>
#include <stdlib.h>
#define TAM 2
#include "tarea.h"



int main()
{
    int legajo[TAM]= {};
    char nombre[TAM][20];
    int nota1[TAM];
    int nota2[TAM];
    float promedio[TAM];
    int opcion;
    int index;
    int legajoModificado;

    do
    {
        printf("1. ALTAS\n2. MOSTRAR\n3. MODIFICAR\n4.BAJA\n5.ORDENAR (por nombre)\n9. SALIR\nElija una opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:

            index = cargarAlumno(legajo, nombre, nota1, nota2, promedio, TAM);

            if(index == -1)
                printf("No hay lugar\n");

            else
                printf("Alumno ingresado\n");

            break;

        case 2:

        mostrarAlumnos(legajo, nombre, nota1, nota2, promedio, TAM);
        break;

        case 3:

            printf("Legajo: ");
            scanf("%d", &legajoModificado);
            index = buscarAlumno(legajoModificado, legajo, TAM);

            if(index == -1)
                printf("Alumno inexistente\n");
            else
            {
                pedirDatos(legajo, nombre, nota1, nota2, promedio, TAM, index);
                printf("Alumno modificado\n");
            }

            break;

        case 4:

            printf("Legajo a buscar para eliminar sus datos: ");
            scanf("%d", &legajoModificado);
            index = buscarAlumno(legajoModificado, legajo, TAM);

            if(index == -1)
                printf("Alumno inexistente\n");
            else
            {
                legajo[index] = 0;
                printf("Datos borrados \n");
            }

            break;

        case 5:


            break;

        case 9:
            opcion = 9;
            printf("\nAdios\n");
            break;

        default:
            printf("Opcion invalida\n");
            break;

        }
    }
    while(opcion != 9);
    return 0;
}

