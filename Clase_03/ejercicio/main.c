#include <stdio.h>
#include <stdlib.h>

float dividirEnteros(int numeroUno,int numeroDos);

int main()
{
    float numero;
    numero=dividirEnteros();
    printf("el resultado es %f",numero);
    return 0;
}
float dividirEnteros(int numeroUno,int numeroDos)
{
    float resultado=0;
    resultado=(float)numeroUno/numeroDos;
    return resultado;
}
