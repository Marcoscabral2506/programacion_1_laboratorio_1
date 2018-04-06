#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
    int numero = 5;
    int i;
    int factor = 1;

    for(i=numero; i>=1; i--)
    {
        factor = factor*i;
    }

    printf("El factorial es: %d", factor);

    return 0;
}*/
// lo que devuelve primero, lo que recibe segundo


/** \brief  calcula el factorial de un numero
 *
 * \param int un numero
 * \return int el factorial de un numero ingresado como parametro
 *
 */


int  factorial(int);

int main()
{
    int numero= 5;
    int factor;

    factor= factorial(numero);
    printf("El factorial es: %d", factor);
    return 0;
}

int factorial(int numero)
{
    int respuesta;
    if(numero == 0)
    {

        respuesta = 1;
    }
    else
    {
        respuesta = numero * factorial(numero-1);
    }

    return respuesta;
}
