#include <stdio.h>
#include <stdlib.h>
/*
*Se ingresan numeros (!=0) , no se sabe cuantos.
*Se pide mostrar:
        *Cantidad de pares e impares.
        *Porcentaje de numeros positivos y negativos.
        *Maximo y minimo.
        *Maximo numero par.
        *cantidad de numeros comprendidos entre 125 y 236.

*/
int main()
{
    int numero;
    int contadorPares=0;
    int contador=0;
    int contadorImpares=0;
    int contNegativos=0;
    int contPositivos=0;
    int cantidadDeNumeros;
    char rta='s';
    float porcentajeNegativos;
    float porcentajePositivos;
    int maximo;
    int minimo;
    int flag=0;
    int maximoPar;
    int numerosEntre=0;

    while(rta!='n')
    {
        printf("\nIngrese un numero: ");
        scanf("%d", &numero);

        while(numero ==0)
        {
            printf("\nReingrese un numero: ");
            scanf("%d", &numero);
        }
        if(numero%2==0 ||numero>maximoPar)
        {


        }
        contadorPares++;
        else{
            contadorImpares++;
        }
        if(numero>0)
        {
            contPositivos++;

        }
        else{
            contNegativos++;
        }
        /*if (flag==0)
        {
            maximo= numero;
            minimo= numero;
            flag= 1;
        }
        else{
            if(numero<minimo)
            {
                minimo= numero;
            }
            if(numero>maximo)
            {
                maximo=numero;
            }
        }
*/
        if(flag==0 || numero>maximo)
        {
            maximo=numero;

        }
        if(flag==0 || numero<minimo)
        {
                minimo=numero;
                flag=1;
        }

        printf("\nDesea continuar? ");
        rta= getche();
    }

    cantidadDeNumeros=contPositivos+contNegativos;
    if(cantidadDeNumeros>125 || cantidadDeNumeros<236)
    {
        numerosEntre++;
    }

    porcentajePositivos=(float)(contPositivos*100)/cantidadDeNumeros;
    porcentajeNegativos= 100-porcentajePositivos; //porcentaje de negativo es la diferencia que hay entre los dos//

    printf("\nLa cantidad de pares es: %d", contadorPares);
    printf("\nLa cantidad de impares es: %d", contadorImpares);
    printf("\nEl porcentaje de negativos es: %% %f", porcentajeNegativos);
    printf("\nEl porcentaje de positivos es: %% %f", porcentajePositivos);
    printf("\nEl maximo es: %d,", maximo);
    printf("\nEl minimo es: %d,", minimo);
    printf("\nLos numeros entre 126 y 236: %d",numerosEntre);
    return 0;
}
