#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int legajo;
    char nombre[20];
    float sueldo;
}eEmpleado;

void mostrarEmpleado(eEmpleado*);
eEmpleado* nuevoEmpleado();
eEmpleado* nuevoEmpleadoParam(int, char, float);
int main()
{
    eEmpleado* unEmpleado;

    unEmpleado = nuevoEmpleadoParam();
    if(unEmpleado==NULL)
    {
        printf("\nNo se consiguio memoria.\n\m");
        system("pause");
        exit(1);
    }

    unEmpleado->legajo=1234;
    strcpy(unEmpleado->nombre, "Juan");
    unEmpleado->sueldo=1000;

    mostrarEmpleado(unEmpleado);

    return 0;
}

void mostrarEmpleado(eEmpleado* emp)
{
    printf("\n %d %s %.2f", emp->legajo, emp->nombre, emp->sueldo);
}
eEmpleado* nuevoEmpleado()
{
    eEmpleado* p;
    p=(eEmpleado*) malloc(sizeof(eEmpleado));
    if(p!=NULL)
    {
        p->legajo=0;
        strcpy(p->nombre, " ");
        p->sueldo=0;
    }

    return p;
}
eEmpleado* nuevoEmpleadoParam(int legajo, char nombre, float sueldo)
{
    eEmpleado* p;
    p=(eEmpleado*) malloc(sizeof(eEmpleado));
    if(p!=NULL)
    {
        p->legajo=legajo;
        strcpy(p->nombre, nombre);
        p->sueldo=sueldo;
    }

    return p;
}
