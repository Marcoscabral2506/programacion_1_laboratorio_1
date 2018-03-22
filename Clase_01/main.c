#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroUno;
    int numeroDos;
    int numeroTres;
    int mayor;

    printf("Ingrese numero uno");
    scanf("%d", &numeroUno);

    printf("Ingrese numero dos");
    scanf("%d", &numeroDos);

    printf("Ingrese numero tres");
    scanf("%d", &numeroTres);

    if(numeroUno>numeroDos & numeroUno>numeroTres){
        mayor=numeroUno;
    }
    else{
        if(numeroDos>numeroUno & numeroDos>numeroTres){
            mayor= numeroDos;
        }else{
            mayor= numeroTres;
        }
    }
    printf("el mayor es %d" , &mayor);
    return 0;
}
