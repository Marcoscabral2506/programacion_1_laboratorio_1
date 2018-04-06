#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

void sumar1(void);

void sumar2(int, int);

int sumar3(void);

int sumar4 (int, int);

int main()
{
    sumar1();
    sumar2();
    sumar3();
    //sumar4();

    return 0;
}
void sumar1(void)
{
    int numero1;
    int numero2;
    int suma;

    numero1= pedirEntero("Ingrese un numero ", 1, 1000);
    numero2= pedirEntero("Ingrese un numero ", 1, 1000);

    suma= numero1+numero2;

    printf("La suma es: %d", suma);
}
void sumar2(int n1, int n2)
{
    int suma;
    suma= n1+n2;
    printf("La suma es: %d", suma);
}

int sumar3(void)
{
    int numero1;
    int numero2;
    int suma;
    numero1= pedirEntero("Ingrese un numero ", 1, 1000);
    numero2= pedirEntero("Ingrese un numero ", 1, 1000);
    suma= numero1+numero2;
    printf("La suma es: %d", suma);

}
int sumar4(int n1, int n2)
{
    int suma;
    suma= n1 + n2;
    return suma;
}
