#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()
{
    char seguir='s';
    int menores, jovenes, adultos, i, mayor, flag=0;
    int opcion=0;
    EPersona persona[20];

    while(seguir=='s')
    {
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                agregarPersona(persona, 20);
                system("pause");
                break;
            case 2:

                break;
            case 3:
                break;
            case 4:
                break;
            case 5:

                seguir = 'n';
                break;
        }
    }


    return 0;
}

