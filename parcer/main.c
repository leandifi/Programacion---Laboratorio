#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* f;
    int n1, n2, n3, n4;
    int cant;

    f = fopen("datos.txt", "r");
    if(f == NULL)
    {
        printf("No se pudo abrir el archivo.");
        exit(EXIT_FAILURE);
    }

    while(!feof(f))
    {
        cant = fscanf(f, "%d, %d, %d, %d\n", &n1, &n2, &n3, &n4);

        if(cant!=4)
        {
            if(feof(f))
            {
               break;
            }else
            {
                printf("Hubo un error al leer el archivo.\n");
                exit(EXIT_FAILURE);
            }
        }

        printf("%d, %d, %d, %d\n", n1, n2, n3, n4);

    }
    fclose(f);
    return 0;
}
