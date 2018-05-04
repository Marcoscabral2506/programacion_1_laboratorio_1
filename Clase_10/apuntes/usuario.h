#include "producto.h"
#include "string.h"

typedef struct
{
    int idUsuario;
    char nombre[50];
    int idProducto;
    int estado;
}eUsuario;
void inicializarUsuariosEstado(eUsuario usuarios[], int cant);
void mostrarListaUsuarios(eUsuario usuarios[], int );
int buscarLibre(int idUsuario[], int );
int cargarAlumno(eUsuario idUsuario[], int tam);
void pedirDatos(int idUsuario[], char nombre[][20], int idProducto[], int tam, int index);

