#include "vectores.h"

int buscarMaximo(int vec[], int tam)
{
    int maximo;
    int i;
    int flag=0;
    for(i=0; i<tam; i++)                 //sabemos cuantos elementos vamos a usar
    {
        if(flag==0 || vec[i]>maximo)
        {
            maximo= vec[i];
            flag= 1;
        }
                                                //el vector apunta a la primer direccion de memoria del vector
    }
    return maximo;
}
void mostrarVector(int vec[], int tamanio)
{
    int i;
    for(i=0; i<tamanio; i++)
    {
        printf("%d -- %d\n",i, vec[i]);
    }

}

int cargarVector(int vec[], int tam)
{
    int i;
    for(i=0; i<TAM; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &vec[i]);
    }
}
