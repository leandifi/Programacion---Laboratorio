#include <stdio.h>
#include <stdlib.h>
#define CANT 5
int main()
{
    /*printf("Hello world!\n");
    return 0;*/

    int vec[CANT], i;

    for(i=0;i<CANT;i++){
        printf("Ingrese: ");
        scanf("%d",&vec[i]);
    }
    for(i=0;i<CANT;i++){
        printf("%d",vec[i]);
    }
    return 0;
}
