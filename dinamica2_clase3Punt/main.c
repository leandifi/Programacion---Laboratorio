#include <stdio.h>
#include <stdlib.h>
#define TAM 5
int main()
{
    int* vec;
    int i;

    vec = (int*) malloc(sizeof( TAM * sizeof(int)));

    if(vec == NULL)
    {
        printf("No se pudo encontrar memoria.\n\n");
        system("pause");
        exit(1);
    }

    for(i=0; i<TAM; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", vec + i);
    }

    for(i=0; i<TAM; i++)
    {
        printf(" %d", *(vec+i));
    }

    free(vec);

    return 0;
}
