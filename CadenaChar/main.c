#include <stdio.h>
#include <stdlib.h>

#define CANT 3
int main()
{
    //scanf("%[^\n]",nombre);
    //scanf("%*[^\n]", nombre);
    int legajo[CANT];
    float salario[CANT];
    char nombre[CANT][31];
    int i;

    for(i=0; i<CANT; i++)
        {
            legajo[i]=i+1;
            printf("Salario: ");
            scanf("%f", &salario[i]);
            printf("Nombre: ");
            fflush(stdin);
            scanf("%[^\n]", nombre[i]);
        }
        printf("Legajo: \t Salario: \t Nombre:");
        for(i=0; i<CANT; i++)
        {
             printf("\n %d \t %f \t %s \n", legajo[i], salario[i], nombre[i]);
        }


    return 0;
}
