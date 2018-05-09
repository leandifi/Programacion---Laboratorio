#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"
int obtenerEspacioLibre(EPersona vec[], int tam)
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
/*int buscarPorDni(EPersona lista[],int tam, int dni)
{
    int dniIngresado;
    printf("\nIngrese un DNI:");
    scanf("%d", &dniIngresado);
    int i;
    int indice=-1;
    for (i=0; i<tam; i++)
    {
        if (vec[i].dni == dniIngresado && vec[i].estado == 0)
        {
            indice=1;
            break;
        }

    return indice;
}*/

/*int agregarPersona (EPersona lista[], int tam)
{
    printf("Ingrese el nombre: ");
    scanf("%s", EPersona.nombre);
    printf("Ingrese edad: ");
    scanf("%d", EPersona.edad);
    printf("Ingrese el DNI: ");
    scanf("%d", EPersona.dni);
}*/

int buscarLibre(EPersona vec[], int tam)
{
   int indice=-1;
   for(int i=0;i<tam;i++)
    {
        if(vec[i].isEmpty==1)
            {
               indice=i;
                break;
            }

    }
     return indice;
}

int buscarPorDni(EPersona vec[], int tam, int dni)
{
    int indice=-1;
    for(int i=0;i<tam;i++)
        {
            if(vec[i].dni == dni && vec[i].isEmpty==0)
                {
             indice=i;
                }
        }
         return indice;
}

int agregarPersona (EPersona lista[], int tam)
{
    EPersona nuevapersona;
    int dni, indice, existe, menores, joven, mayores;
    indice=buscarLibre(lista, 20);
    if(indice==-1)
        {
            printf("Ya existe.");
        }
    else
    {
        printf("Ingrese un dni: ");
        scanf("%d",&dni);
        existe= buscarPorDni(lista, 20, dni);
    }
    if(existe!=-1)
    {
        printf("El dni corresponde a una persona ya cargada.");
    }
    else
    {
        printf("Ingrese un nombre:");
        fflush(stdin);
        scanf("%s", &nuevapersona.nombre);
        printf("Ingrese edad:");
        scanf("%d", &nuevapersona.edad);

        nuevapersona.dni=dni;
        nuevapersona.isEmpty=0;

        lista[indice]=nuevapersona;
        printf("\nPersona cargada.");
    }
     if(nuevapersona.edad<=18)
    {
        menores=menores+1;
        contadorMenores=menores;
    }
    else if(nuevapersona.edad>18 && nuevapersona.edad<35)
    {
        jovenes=jovenes+1;
        contadorJovenes=jovenes;
    }
    else
        {
            mayores=mayores+1;
            contadorMayores=mayores;
        }

}


