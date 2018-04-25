#include <stdio.h>
#include <stdlib.h>
#define TAM 2

int buscarLibre(int[], int);
void mostrarAlumnos(int[], char[][20], int[], int[], float[], int);
float calcularPromedio(int, int);
int cargarAlumno(int[], char[][20], int[], int[], float[], int);
void pedirDatos(int[], char[][20], int[], int[], float[], int, int);
int buscarAlumno(int num, int* legajo, int);
