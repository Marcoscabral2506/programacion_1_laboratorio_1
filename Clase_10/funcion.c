#include <stdio.h>
#include <stdlib.h>
#include "funcion.h"
#include <string.h>
#include<conio.h>
#include <ctype.h>

/*int buscar(ePropietario propietarios[])
{
    int i;
    int index = -1;
    for(i = 0; i < 1; i++)
    {
        if(propietarios.idPropetario== propietarios.idPropetario)
        {
            index = i;
            break;
        }
    }
    return index;
}*/
void mostrarAlumnos(ePropietario propietarios[])
                        {
                            int i;
                            for(i = 0; i < 1; i++)
                            {

                                    printf("%d - %s - %d", propietarios[i].idPropetario, propietarios[i].nombreYApellido, propietarios[i].tarjeta);
                            }
                        }
void mostrarHardcodeo(ePropietario propietarios[])
{


    int idPropietario[]= {1,2,3,4};
    char nombre[][20]= {"Juan","Luis","Maria","Jose"};
    char tarjeta[][20]= {"111-111","222-222","333-333","444-444"};
    char direccion[][20]= {"mitre","urquiza","belgrano","alsina"};
    int estado=1;

    int i;

    for(i=0; i<4; i++)
    {
        if(propietarios[i].estado==1)
        {
            printf("%d %s %d \n", propietarios[i].idPropetario, propietarios[i].nombreYApellido, propietarios[i].tarjeta);

        }
    }

}
void tarjeta(ePropietario propietarios[])
{

    int flag=0;
    char auxstring[35];
    char auxstring2[35];
int i;

            for(i=0; i<1; i++)
            {

                    printf("Ingrese su nueva tarjeta: ");
                    scanf("%d", &propietarios[i].tarjeta);
            }
}
void tomarDato(ePropietario propietarios[])
{

    int flag=0;
    char auxstring[35];
    char auxstring2[35];
int i;

            for(i=0; i<5; i++)
            {

                    printf("Ingrese ID: ");
                    scanf("%d", &propietarios[i].idPropetario);
                    printf("Ingrese nombre y apellido: ");
                    fflush(stdin);
                    gets(auxstring);
                    printf("Ingrese tarjeta: ");
                    scanf("%d", &propietarios[i].tarjeta);
                     /*while(strlen(auxstring)>19)
                        {
                            printf("Error, el nombre es demasiado largo, reingrese el dato: ");
                            gets(auxstring);
                        }*/
                    strcpy(propietarios[i].nombreYApellido,auxstring);

                    /*printf("Ingrese apellido: ");
                    fflush(stdin);
                    gets(auxstring2);
                    while(strlen(auxstring2)>19)
                        {
                            printf("Error, el nombre es demasiado largo, reingrese el dato: ");
                            gets(auxstring2);
                        }
                    strcpy(propietarios[i].apellido,auxstring2);*/


                    propietarios[i].estado = 1;
                    flag=1;
                    break;
                }
            if(flag==0)
            {
                printf("No hay espacio!\n");
            }
            }


/*void eliminarProgramador(ePropietario propietarios[])
{
    int flag =0;
    int auxInt;
    char respuesta;
    int i;

            printf("Ingrese la ID del programador a eliminar del registro: ");
            scanf("%d", &auxInt);

            for(i=0; i<5; i++)
            {
                if(propietarios[i].estado==1 && auxInt == propietarios[i].idPropetario)
                {
                    printf("%d--%s--%s--%d\n", propietarios[i].id, propietarios[i].nombre, propietarios[i].apellido,propietarios[i].idCategoria);

                    printf("Esta seguro de eliminar el programador del registro? s/n: ");
                    respuesta = getche();
                    if(respuesta=='s')
                    {
                       propietarios[i].estado = 0;
                    }
                    else
                    {
                        printf("Accion cancelada!");
                    }
                    flag=1;
                    break;

                }
            }

            if(flag==0)
            {
                printf("ID inexistente");
            }

}*/
