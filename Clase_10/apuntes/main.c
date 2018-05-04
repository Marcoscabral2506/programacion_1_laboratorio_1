#include <stdio.h>
#include <stdlib.h>
#include "usuario.h"
#define TAMUSUARIO 2
#define TAMPROD 2
#include "string.h"

int main()
{
    int opcion;
    int index;
    eProducto listaDeProductos[TAMPROD];
    eUsuario  listaDeUsuarios[TAMUSUARIO];
    inicializarUsuariosEstado(listaDeUsuarios, TAMUSUARIO);
    inicializarProductoEstado(listaDeProductos, TAMPROD);
 do
    {
        printf("1. ALTAS\n2. MOSTRAR\n3. MODIFICAR\n4.BAJA\n5.ORDENAR (por nombre)\n9. SALIR\nElija una opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:

            //index = cargarAlumno(listaDeUsuarios, TAMUSUARIO);


            break;

        case 2:
                    mostrarListaUsuarios(listaDeUsuarios, TAMUSUARIO);

        break;

        case 3:

           /* printf("Legajo: ");
            scanf("%d", &legajoModificado);
            index = buscarAlumno(legajoModificado, legajo, TAM);

            if(index == -1)
                printf("Alumno inexistente\n");
            else
            {
                pedirDatos(legajo, nombre, nota1, nota2, promedio, TAM, index);
                printf("Alumno modificado\n");
            }
*/
            break;

        case 4:

           /* printf("Legajo a buscar para eliminar sus datos: ");
            scanf("%d", &legajoModificado);
            index = buscarAlumno(legajoModificado, legajo, TAM);

            if(index == -1)
                printf("Alumno inexistente\n");
            else
            {
                legajo[index] = 0;
                printf("Datos borrados \n");
            }
*/
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
