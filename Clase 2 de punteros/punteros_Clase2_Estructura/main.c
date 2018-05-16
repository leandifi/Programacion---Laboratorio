#include <stdio.h>
#include <stdlib.h>
struct alumno
{
    char nombre[20];
    int edad;
};
struct persona
{
   char pers[];
};

int main()
{

    struct alumno auxiliarAlumno;
    struct alumno *punteroAlumno;
    punteroAlumno = &auxiliarAlumno;
    printf("Ingrese nombre: ");
    gets((*punteroAlumno).nombre);
    //gets(&punteroAlumno->nombre);
    printf("Ingrese edad: ");
    scanf("%d", &(*punteroAlumno).edad);
    //scanf("%d", &punteroAlumno->edad);

    //printf("Su nombre es: %s", punteroAlumno->nombre);
    //printf("\nSu edad es: %d", punteroAlumno->edad);

    printf("Su nombre es: %s", (*punteroAlumno).nombre);
    printf("\nSu edad es: %d", (*punteroAlumno).edad);


    //*(punteroAlumno).edad; //operador flecha: punteroAlumno -> edad;
    //*(punteroAlumno).nombre; //operador flecha: punteroAlumno -> nombre;
    return 0;
}
