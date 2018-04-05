#include <stdio.h>
#include <stdlib.h>

/*Declaracion de la funcion o llamada prototipo de la funcion
+
+tipo_de_dato_devuelto identificador (parametros de entrada)
+
+//tipo_de_dato_devuelto (Podemos tener...)
+
+(int, float, char, void)
+
+//identificador
+
+nombre de funcion son identificados por lo menos con un verbo. nombre representativo: verbo+objeto
+
+//parametros de entrada
+
+declaro una variable por cada parametro que va a recibir la funcion(mismas regla de declaracion, tipo de dato y nombre)
+*/
//si NO pongo void la funcion podria llegar a pasar un entero
//las funciones generalemente se llaman desde el main pero se puede llamar de otras funciones.
/*****************************************/


+int pedirEntero(char[], int, int);
+    printf("La edad es: %d, el legajo es %d, y la nota es %d", edad, legajo, nota);

-int mostrarEincrementar(int);

-int main()
+    return 0;
+}
+int pedirEntero(char mensaje[], int min, int max)
 {
     int numero;
-    int incremento;

-    printf("Ingrese un numero: ");
+    printf("%s", mensaje);    //para un conjunto de caracteres y oraciones no pongo %c pongo %s//
     scanf("%d", &numero);

-    //lamada a la funcion mando un valor
-    incremento = mostrarEincrementar(numero);
+    numero = validarEntero(numero, min, max, mensaje);
+while(numero<min || numero>max)
+    {
+        printf("Error: %s", mensaje);
+        scanf("%d", &numero);
+    }

-    printf("\nEl numero incrementado es : %d", incremento);
-
-    return 0;
+    return numero;
 }
-// Segunda instancia, implementacion o desarrollo de la funcion
-// implementacion recibo un valor
-
-
- int mostrarEincrementar(int numero)
+int validarEntero(int dato, int min, int max, char mensaje[])
 {
-    int retorno;
-
-    printf("El numero ingresado es: %d", numero);
-
-    retorno = numero+10;
-
-    return retorno;
+    while(dato<min || dato>max)
+    {
+        printf("Error: Reingrese %s", mensaje);
+        scanf("%d", &dato);
+    }

+    return dato;
 }
