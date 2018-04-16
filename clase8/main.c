#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
//void funcion(int vec[], int tam) -->> funcion para vector.
//void funcion2(char matriz[][cantidadDeColumnas], int filas) -->> funcion para matriz.
void mifuncion(char [][20], int filas);
int main()
{
    char nombres[5][20]={"juAn CARLOS", "luIs", "anA", "pePe", "PEdro"};
    mifuncion(nombres,5);

    return 0;
}

void mifuncion(char vec[][20], int filas)
{
    for(int i=0;i<filas;i++)
    {
        strlwr(vec[i]);
        for(int k=0; k< 20; k++)
            {
                if(vec[i][k]==' '){
                    vec[i][k+1]=toupper(vec[i][k+1]);
                }
            }
        vec[i][0]= toupper(vec[i][0]);
        printf("%s \n", vec[i]);
    }
}
