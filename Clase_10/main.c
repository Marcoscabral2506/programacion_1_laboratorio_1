#include <stdio.h>
#include <stdlib.h>
#include "funcion.h"
int main()
{
    ePropietario propietarios[3];



    int i;

    for(i=0; i<5; i++)
    {
        propietarios[i].estado=0;
    }
    int index;
    char seguir='s';
    int opcion;
    char pregunta;

    do
    {
        printf("1. Alta\n2. Modificaciones\n3. Mostrar\n4. Bajas \n9.salir\nElija una opcion: ");
        scanf("%d", &opcion);
        switch(opcion)
        {
        case 1:

        tomarDato(propietarios);
        break;

         case 2:

                tarjeta(propietarios);

            break;

       case 3:

            mostrarAlumnos(propietarios);
            break;

        case 4:
            /*printf("Esta seguro para darse de baja?");
            fflush(stdin);
            scanf("%c", &pregunta);
            if (pregunta=='s')
                {
             printf("ID a buscar para eliminar sus datos: ");
                scanf("%d", &propietarios);

                index = buscar(propietarios);

                if(index == -1)
                    printf("Propietario inexistente\n");
                else
                {
                    index = 0;
                    printf("Datos borrados \n");
                }

                break;
                }
                else{
                break;
            }
                /*asignarProyecto(plantilla,proyectos,proyectosPorprogramador);


                break;

            case 5:
                break;

            case 6:
                break;

            case 7:
                break;

            case 8:
                break;*/

            case 9:

                seguir = 'n';

                break;

        }
        }while(seguir=='s');



    return 0;
}
