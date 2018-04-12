#include <stdio.h>
#include <stdlib.h>
#define TAM 5 //cada vez que encuentra la var TAM reemplaza por el valor 5

//primero lo que devuelve
void mostrarVector(int[], int); //el vector y cantidad de elementos como parametro

int main()
{
    int vector[TAM] = {}; //agrupa 5 elementos de tipo entero
    int i;

    for(i=0; i<TAM; i++)
    {
        vector[i] = 0;
    }

    /*Carga Secuencial*/

    for(i=0; i<TAM; i++)         //array empieza en 0, y termina en el numero que definimos menos (-) 1
    {
        printf("Ingrese un numero: ");
        scanf("%d", &vector[i]);
    }


    /*Mostrar el vector*/

    mostrarVector(vector, TAM); //vector se pasa por referencia, pasando la direccion de memoria, el entero por  valor osea como copia

    return 0;
}
void mostrarVector(int vec[], int tamanio)
{
    int i;
    for(i=0; i<tamanio; i++)   //sabemos cuantos elementos vamos a usar
    {

        printf("%d -- %d\n",i, vec[i]); //el vector apunta a la primer direccion de memoria del vector
    }

}
void modificarValor(int[])
{

}
