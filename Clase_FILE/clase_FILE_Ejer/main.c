#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
typedef struct
{
    int legajo;
    char nombre[20];
    float sueldo;
    int estado;
}eEmpleado;
int main()
{
    eEmpleado* empleado;
    eEmpleado* otroEmpleado;
    empleado=newEmpleado();
    otroEmpleado=nuevoEmpleadoParam(1234,"juan",5000,1);
    return 0;
}

eEmpleado* newEmpleado()
{
    eEmpleado* nuevoEmpleado;
    nuevoEmpleado=(eEmpleado*) malloc(sizeof(eEmpleado));
    if(nuevoEmpleado!=NULL)
    {
        nuevoEmpleado->legajo=0;
        strcpy(nuevoEmpleado->nombre, "");
        nuevoEmpleado->sueldo=0;
        nuevoEmpleado->estado=0;

    }
    else
    {
        printf("No se pudo encontrar espacio en la memoria.");
    }
    return nuevoEmpleado;
}
eEmpleado* nuevoEmpleadoParam(int legajo, char nombre, float sueldo)
{
    eEmpleado* nuevoEmpleadoP;
    nuevoEmpleadoP=(eEmpleado*) malloc(sizeof(eEmpleado));
    if(nuevoEmpleadoP!=NULL)
    {
        nuevoEmpleadoP->legajo=legajo;
        strcpy(nuevoEmpleadoP->nombre, nombre);
        nuevoEmpleadoP->sueldo=sueldo;
        nuevoEmpleadoP->estado=1;
    }

    return nuevoEmpleadoP;
}
void mostrarEmpleado(eEmpleado* emp)
{
    printf("\n %d %s %.2f", emp->legajo, emp->nombre, emp->sueldo);
}
void mostrarEmpleados(eEmpleado* emp)
{
    for(i=0; i<tam; i++)
    {

        if(emp.estado==1)
        {
            printf("\n %d %s %.2f", emp+i->legajo, emp+i->nombre, emp+i->sueldo);
        }
    }

}
