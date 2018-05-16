#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct persona
{
    char nombre[20];
    int edad;
};
int main()
{
    int i;
    struct persona pers[3];
    struct persona *ptrPers;
    ptrPers=pers;
    for(i=0; i<3; i++)
    {
        printf("Nombre:\n ");
        gets(ptrPers[i].nombre);
        printf("Edad:\n ");
        scanf("%d", ptrPers[i].edad);

    }
    for(i=0;i<3;i++)
    {
    printf("Los nombres son: \n %s", ptrPers[i].nombre);
    printf("La edad es: \n %d", ptrPers[i].edad);
    }
    return 0;
}
