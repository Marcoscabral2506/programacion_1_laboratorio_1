#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;

    char buffer[100]="Esto es un texto dentro del fichero";
    char bufferIn[100];

    fp=fopen("D:\\punt\\Memoria dinamica\\fichero.txt", "w");

    fprintf(fp, buffer);
    fprintf(fp, "%s","\nEsto es otro texto dentro del fichero");
    fprintf(fp, "\nEsto es otro dentro del texto y el buffer: ","%s");

    fclose(fp);
    system("pause");
    system("cls");

     fp=fopen("D:\\punt\\Memoria dinamica\\fichero.txt", "r");
     if(fp==NULL)
     {
         printf("archivo no encntrado!!!");
     }
     else{
          while(!feof(fp)) //find end of file encunetra la ultima linea del archivo
          {
            fgets(bufferIn, 100, fp); //guarda en buffer lo que lee en el archivo
            puts(bufferIn);
          }

     }
    return 0;
}
