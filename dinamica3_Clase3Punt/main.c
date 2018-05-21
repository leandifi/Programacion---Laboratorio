#include <stdio.h>
#include <stdlib.h>
#define TAM 5
int main()
{
    int* vec;
    int* aux;
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
    printf("\n\n");

    aux = (int*) realloc(vec, (TAM+5) * sizeof(int));

    if(aux == NULL)
    {
        printf("\nNo se pudo conseguir memora.\n\n");
        system("pause");
        exit(1);
    }
    else
    {
        vec=aux;
        for(i=5; i<(TAM+5); i++)
        {
            printf("Ingrese un numero: ");
            scanf("%d", vec + i);
        }

        for(i=0; i<(TAM+5); i++)
        {
            printf(" %d", *(vec+i));
        }
    printf("\n\n");
    }

    vec = (int*) realloc(vec, TAM * sizeof(int));

     for(i=0; i<TAM; i++)
    {
        printf(" %d", *(vec+i));
    }
    printf("\n\n");


    free(vec);

    return 0;
}
