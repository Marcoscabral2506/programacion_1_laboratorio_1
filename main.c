#include <stdio.h>
#include <stdlib.h>


/*Declaracion de la funcion o llamada prototipo de la funcion

tipo_de_dato_devuelto identificador (parametros de entrada)

//tipo_de_dato_devuelto (Podemos tener...)

(int, float, char, void)

//identificador

nombre de funcion son identificados por lo menos con un verbo. nombre representativo: verbo+objeto

//parametros de entrada

declaro una variable por cada parametro que va a recibir la funcion(mismas regla de declaracion, tipo de dato y nombre)
*/
//si NO pongo void la funcion podria llegar a pasar un entero
//las funciones generalemente se llaman desde el main pero se puede llamar de otras funciones.
/*****************************************/

int mostrarEincrementar(int);

int main()
{
    int numero;
    int incremento;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    //lamada a la funcion mando un valor
    incremento = mostrarEincrementar(numero);

    printf("\nEl numero incrementado es : %d", incremento);

    return 0;
}
// Segunda instancia, implementacion o desarrollo de la funcion
// implementacion recibo un valor


 int mostrarEincrementar(int numero)
{
    int retorno;

    printf("El numero ingresado es: %d", numero);

    retorno = numero+10;

    return retorno;

}
