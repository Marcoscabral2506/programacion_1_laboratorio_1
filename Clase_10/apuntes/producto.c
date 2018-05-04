#include "producto.h"
#include <string.h>

void inicializarProductoEstado(eProducto producto[], int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        producto[i].estado = 0;
    }
}
void mostrarListaProductos(eProducto productos[], int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {
        if(productos[i].estado==1)
        {
            printf("%d %s  %s  %d \n", productos[i].idProducto, productos[i].nombre, productos[i].clase, productos[i].stock);
         }
    }
}
