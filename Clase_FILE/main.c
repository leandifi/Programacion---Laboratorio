#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* f;
    //f= fopen("Nombre del archivo","Modo del archivo:*"); w;r;a=para texto. wb;rb;a;ab= para binario
    f=fopen("librerias.txt","w");
    if(f==NULL)
    {
        printf("Error;");
        system("pause");
        exit(1);
    }

    fprintf(f,"Hola mundo.");
    fclose(f);

    return 0;
}
