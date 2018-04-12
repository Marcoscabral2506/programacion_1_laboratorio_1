#include <stdio.h>
#include <stdlib.h>
#define TAM 5                           //cada vez que encuentra la var TAM reemplaza por el valor 5

//primero lo que devuelve

void mostrarVector(int[], int);          //el vector y cantidad de elementos como parametro


int main()
{
    int vector[TAM] = {};               //agrupa 5 elementos de tipo entero
    int i;
    int mayor;
    int indice;

                        //array empieza en 0, y termina en el numero que definimos menos (-)
    cargarVector(vector, TAM);
    mostrarVector(vector, TAM);
    mayor= buscarMaximo(vector, TAM);
    printf("EL mayor es %d", mayor);            //vector se pasa por referencia, pasando la direccion de memoria, el entero por  valor osea como copia
    indice=buscarValor(vector, TAM, 14);
    if(indice== -1)
    {
        printf("No lo encontro!!!");
    }
    else{
        printf("Lo encontro");
    }
    return 0;
}


//funcion que devuleva cantidad de pares en una array otra que devuelva la cantidad de positivos. Hacer la misma funcion buscando un char. int buscarChar(char[], int, char);
