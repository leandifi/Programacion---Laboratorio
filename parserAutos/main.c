#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int id;
    char marca[50];
    char modelo[50];
    char color[50];
    int anio;
    int estado;
}eAutos;
int main()
{
    FILE* f;
    /*int id, anio, cant;
    char marca[50];
    char modelo[50];
    char color[50];
    char idCad[20];
    char anioCad[20];*/
    char idCad[20];
    int cant;
    char anioCad[20];
    eAutos pAutos;
    f=fopen("autos.csv", "r");

    if(f==NULL)
    {
        printf("No se pudo abrir el archivo.\n\n");
        exit(EXIT_FAILURE);
    }

    while(!feof(f))
    {

        cant = fscanf(f, "%[^,], %[^,], %[^,], %[^,], %[^\n] \n", idCad, pAutos.marca, pAutos.modelo, pAutos.color, anioCad);

        if(cant!= 5)
        {
            if(feof(f))
            {
                break;
            }else
            {
                printf("Error al leer el archivo.\n\n");
                exit(EXIT_FAILURE);
            }

        }
        pAutos.id=atoi(idCad);
        pAutos.anio=atoi(anioCad);

        printf("%4d %15s %16s %15s %4d\n", pAutos.id, pAutos.marca, pAutos.modelo, pAutos.color, pAutos.anio);

    }
    fclose(f);

    return 0;
}
