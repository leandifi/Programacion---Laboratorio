#include <stdio.h>
#include <stdlib.h>
#define CANT 5

int main()
{
    /*printf("Hello world!\n");
    return 0;*/
    int leg[CANT];
    float sueldo[CANT];
    int edad[CANT];
    int i;

    for(i=0;i<CANT; i++){
        leg[i]=i+1;
    }
    for(i=0;i<CANT; i++){
        //leg[i]=i+1;
        printf("\nIngrese sueldo: ");
        scanf("%d", &sueldo[i]);
        printf("\nIngese edad: ");
        scanf("%d", &edad[i]);
    }
    //scanf("%d", &leg[i];"%d",&edad{i};"%d", &sueldo[i]);
    return 0;
}
