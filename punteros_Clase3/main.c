#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* pNum;
    pNum=(int*) malloc(sizeof(int));

    if(pNum==NULL)
    {
        printf("No se pudo conseguir memoria dinamica.\n\n");
        exit(1);
    }
    printf("Ingrese un numero: ");
    scanf("%d", pNum);
    //*pNum=5;
    printf("%d\n\n", *pNum);

    free(pNum); //libera el espacio de memoria apuntado por pNum

    return 0;
}
