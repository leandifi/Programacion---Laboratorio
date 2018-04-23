#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
typedef struct
{
    int dia;
    int mes;
    int anio;
}eFecha;

typedef struct
{
    int legajo;
    char nombre;
    float sueldo;
    char sexo;
    eFecha fechaIngreso;
    int isEmpty;
}eEmpleado;
void inicializarEmpleado(eEmpleado vec[], int tam);
void mostrarEmpleados (eEmpleado vec[], int tam);
void mostrarEmpleado(eEmpleado emp);
int buscarLibre(eEmpleado vec[], int tam);
int buscarEmpleado(eEmpleado vec[], int tam, int legajo);

int main()
{
    char respuesta=0;
    eEmpleado gente[50];
    inicializarEmpleado(gente, 50);
    do
    {
        switch(menu())
        {
        case 1:
            altaEmpleado(gente, 50);
            system("pause");
            break;
        case 2:
            printf("\nBaja\n\n");
            system("pause");
            break;
        case 3:
            printf("\nModificar\n\n");
            system("pause");
            break;
        case 4:
            printf("\nListar\n\n");
            system("pause");
            break;
        case 5:
            printf("\nOrdenar\n\n");
            system("pause");
            break;
        case 6:
            respuesta=1;
            break;
        default:
            printf("\nOpcion incorrecta\n");
            system("pause");
            break;

        }
    }
    while(respuesta!=1);

return 0;
}

int menu()
{
    int opcion;
    system("cls");
    printf("1-Alta \n2-Baja \n3-Modificacion. \n4-Listar \n5-Ordenar \n6-Salir. \n");
    printf("Ingrese opcion:\n");
    scanf("%d", &opcion);

 return opcion;
}

void inicializarEmpleado(eEmpleado vec[], int tam)
{
    int i;
    for (i=0; i<50; i++)
    {
        vec[i].isEmpty=1;
    }
}

int buscarLibre(eEmpleado vec[], int tam)
{
    int indice=-1;
    int i;
    for (i=0; i<tam; i++)
    {
        if (vec[i].isEmpty == 1)
        {
            indice=1;
            break;
        }
    }
    return indice;
}

void mostrarEmpleados(eEmpleado vec[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(vec[i].isEmpty == 0)
        {
            mostrarEmpleado(vec[i]);
        }
    }
}

/*void mostrarEmpleado(eEmpleado emp)
{
    printf("%d %s %c %.2f %2d/%2d/%1d \n" emp.legajo,emp.nombre,emp.sexo,emp.sueldo);
}*/

int buscarEmpleado(eEmpleado vec[], int tam, int legajo)
{
    int legajoIngresado;
    printf("\nIngrese un legajo:");
    scanf("%d", &legajoIngresado);
    int i;
    int indice=-1;
    for (i=0; i<tam; i++)
    {
        if (vec[i].legajo == legajoIngresado && vec[i].isEmpty == 0)
        {
            indice=1;
            break;
        }

    return indice;
}

int altaEmpleado(eEmpleado vec[i], int tam)
{
    buscarLibre(gente, 50);
    buscarEmpleado(eEmpleado vec[], int tam, int legajo);
    printf("\nIngrese nombre:");
    scanf("%s", eEmpleado.nombre);
    printf("\nIngrese sexo:");
    scanf("%c", eEmpleado.sexo);
    printf("\nIngrese sueldo:");
    scanf("%.2f", eEmpleado.sueldo);
    printf("\nFecha de ingreso:");
    scanf("%d %d %d", eEmpleado.fechaIngreso.dia, eEmpleado.fechaIngreso.mes, eEmpleado.fechaIngreso.anio);
}
