#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int a;   //4 bytes
    int b;  //1 byte

}dato;

int main()
{
   /* dato d;
    d.a=5;
    d.b='<';

    dato* pDato;
    pDato= &d;
    //->operador flecha sirve para que el valor al que apunta un puntero sea mas sencillo
    //abstrae parentesis asterico y punto

    printf("%d -- %c",pDato->a, pDato->b);

//printf("TAM: %d\n", sizeof(dato));
//dice dame un sizeof de un entero, no digo dame 4 bytes se ajusta al valor del tipo de dato de cada estructura
//muestra los bytes que ocupa en memoria dato
//cuando la suma no es par de 4 le agrega bytes para que sea multiplo de 4

*/
 int i;
 dato l[2]={{1,'a'},{1,'b'}};
 dato* pLista;
 pLista= l;

 for(i=0; i<2; i++)
 {
     printf("%d --  %c\n", (*(pLista+i)).a, (*(pLista+i)).b);
    //codigo muy suseptible a que tenga error
     printf("%d --  %c\n", (pLista+i)->a, (pLista+i)->b);

 }
    return 0;
}
