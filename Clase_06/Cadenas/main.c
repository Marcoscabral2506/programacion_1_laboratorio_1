#include <stdio.h>
#include <stdlib.h>

int contarPares(int[], int);

//funcion de buscar un valor dentro del vector, si esta devuelve el indice sino -1

/** \brief  determina si un caracter esta o no esta determinada
 *
 * \param char[] coleccion de caracteres
 * \param int tamaño de la coleccion
 * \param char caracter a buscar
 * \return int -1 si no lo encuentra o el indice del valor encontrado
 *
 */
int buscarChar(char[], int, char);

int main()
{
    int vector[5]={5,5,9,6,5};
    char letras[5]={'f','g','i','m','q'};
    int indexLetra;
    int cantidad;

    cantidad= contarPares(vector, 6);
    indexLetra= buscarChar(letras, 5, 'm');

    if(indexLetra==-1)
    {
        printf("No se encuentra el caracter!!!");
    }
    else{
        printf("El caracter se encuentra en el array\n");
    }


    printf("\nLa cantidad de pares es: %d\n", cantidad);       //actiañes
    return 0;
}

int contarPares(int array[], int cantidad)  //formales
{
    int contadorPares=0;
    int i;
    //for para recorrer
    //todos los array empiezan en 0

    for(i=0; i<cantidad; i++);
    {
        if(array[i]%2==0)
        {
            contadorPares++;
        }
    }

    return contadorPares;
}

int buscarChar(char array[], int cantidad, char caracter)
{
    int index=-1;
    int i;

    for(i=0; i<cantidad; i++)
    {
        if(array[i]==caracter)
        {
            index=i;
            break;
        }
    }

    return index;

}


