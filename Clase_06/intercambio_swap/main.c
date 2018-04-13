#include <stdio.h>
#include <stdlib.h>
//algoritmo de BURBUJA
int main()
{
    //int vector[5]={8,5,9,6,1};
    char vector[5]={'f','g','i','m','q'};
    char i;
    char j;
    int auxiliar;

    for(i=0; i<4; i++)
    {

        for(j=i+1; j<5; j++)
        {
            if(vector[i]>vector[j])   //criterio de ordenamiento//
              {
                //aplico swap
                auxiliar= vector[i];
                vector[i]= vector[j];
                vector[j]=auxiliar;
              }
        }

    }
    for(i=0;i<5; i++)
    {
        printf("%c\n", vector[i]);
    }

}
