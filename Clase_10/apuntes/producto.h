typedef struct
{
    int idProducto;
    char nombre[50];
    char clase[20];
    int stock;
    int estado;
}eProducto;

void inicializarProductoEstado(eProducto [], int );
void mostrarListaProductos(eProducto [], int );
