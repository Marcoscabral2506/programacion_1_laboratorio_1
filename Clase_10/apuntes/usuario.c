#include "usuario.h"
#include "string.h"

void inicializarUsuariosEstado(eUsuario usuarios[], int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        usuarios[i].estado = 0;
    }
}


void mostrarListaUsuarios(eUsuario usuarios[], int TAMUSUARIO)
{
    int i;

    for(i=0; i<TAMUSUARIO; i++)
    {

        if(usuarios[i].estado==1)
        {
            printf("%d %s %d \n", usuarios[i].idUsuario, usuarios[i].nombre, usuarios[i].idProducto);

        }
    }
}
int buscarLibre(int idUsuario[], int tam)
{
    int index = -1;
    int i;
    for(i = 0; i < tam; i++)
    {
        if(idUsuario[i] == 0)
            {
            index = i;
            break;
            }
    }
    return index;
}
int cargarAlumno(eUsuario idUsuario[], int tam)
{
    int index ;
    index = buscarLibre(idUsuario, tam);

   // if(index != -1)
        //pedirDatos();

    return index;
}
void pedirDatos(int idUsuario[], char nombre[][20], int idProducto[], int tam, int index)
{
    printf("idUsuario: ");
    scanf("%d", &idUsuario[index]);
    printf("Nombre: ");
    //fflush(stdin);
    gets(nombre[index]);
    printf("idProducto: ");
    scanf("%d", &idProducto[index]);
}
void inicializarUsuariosHardCode(eUsuario usuarios[])
{
    int id[15] = {1000,1001};
    char nombre[][50]= {"Juan","Maria"};
    int producto[15] = {100,100};
    int estado;
    int i;

    for(i=0; i<15; i++)
    {
        usuarios[i].idUsuario=id[i];
        usuarios[i].idProducto=producto[i];
        usuarios[i].estado = 1;
        strcpy(usuarios[i].nombre, nombre[i]);

    }

}
