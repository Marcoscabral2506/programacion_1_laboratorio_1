#include <stdio.h>
#include <stdlib.h>

float pedirFloat(char[], float, float);
float validarFloat(float, float, float, char[]);

int main()
{
    float edad;    //18-60
    float legajo;    //1-1000
    float nota;       //1-10

    edad = pedirFloat("Ingrese edad: ", -100, 0); //funciona como el prompt y se guarda

    legajo = pedirFloat("Ingrese legajo: ", -1, -1000);

    nota = pedirFloat("Ingrese nota: ",-1, -10);

    printf("La edad es: %f, el legajo es %f, y la nota es %f", edad, legajo, nota);


    return 0;
}
float pedirFloat(char mensaje[], float min, float max)
{
    float numero;

    printf("%s", mensaje);    //para un conjunto de caracteres y oraciones no pongo %c pongo %s//
    scanf("%f", &numero);

    numero = validarFloat(numero, min, max, mensaje);

    return numero;
}

/*while(numero<min || numero>max)
    {
        printf("Error. %s", mensaje);
        scanf("%d", &numero);
    }

    return numero;
}*/
float validarFloat(float numero, float min, float max, char mensaje[])
{
    while(numero<min || numero>max)
    {
        printf("Error: %s", mensaje);
        scanf("%f", &numero);
    }

    return numero;
}

