#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"
#include <string.h>
/****************************************************
    Menu:
        1. Parse del archivo data.csv
        2. Listar Empleados
        3. Ordenar por nombre
        4. Agregar un elemento
        5. Elimina un elemento
        6. Listar Empleados (Desde/Hasta)
*****************************************************/


int main()
{
    ArrayList* lista;
    lista= al_newArrayList();
    int aux;
    Employee* e1;
    Employee* empleadoaux;
    Employee* e2;
    int i;
    e1= (Employee*)malloc(sizeof(Employee));
    e2= (Employee*)malloc(sizeof(Employee));
    /************cargar estructura********************/
    e1 ->id=666;
    strcpy(e1 ->name,"Juan");
    strcpy(e1 ->lastName,"Gomez");
    e1->isEmpty=1;
    e2 ->id=777;
    strcpy(e2 ->name,"Alejandro");
    strcpy(e2 ->lastName,"Rodriguez");
    e2->isEmpty=2;
    /*********************************/
    al_add(lista, e1);//puntero e1 que apunta al dato
    al_add(lista, e2);
    aux=al_len(lista);
    printf("Cantidad de elementos:%d\n", aux);


    al_sort(lista,employee_compare,1);

    for(i=0;i<aux;i++)
    {
        empleadoaux= (Employee*)al_get(lista,i);
        employee_print(empleadoaux);

    }
    printf("\n%d\n",employee_compare(e1,e2));

    return 0;
}
