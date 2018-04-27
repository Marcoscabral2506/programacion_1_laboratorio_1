#include <stdio.h>
#include <stdlib.h>
# include <string.h>
#define T 10

  typedef struct
  {
      int legajo;
      char nombre[50];
      float promedio;


  }eAlumno;




  //void mostrar (int legajo;char nombre[];float legajo);//

  void mostrarunalumno(eAlumno unAlumno);




int main()
{
    eAlumno clase[T];
    eAlumno miAlumno ;

    int i;



  for(i=0;i<T;i++)
  {



    //printf("TAM: %d ", sizeof(eAlumno))//


    printf("INGRESE legajo: ");
    scanf("%d", &clase[i].legajo);
    printf("ingrese nombre: ");
    fflush(stdin);
    gets(clase[i].nombre);
    printf("ingrese preomedio: ");
    scanf("%f",&clase[i].promedio);

}

 for(i=0;i<T;i++)
    {
        mostrarunalumno(clase[i]);
    }




    return 0;
}
 void mostrarunalumno(eAlumno unAlumno)

  {

    printf("%d %s %f\n",unAlumno.legajo,unAlumno.nombre,unAlumno.promedio );


  }
