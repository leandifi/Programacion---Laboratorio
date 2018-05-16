#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void mostrarCadena(char*);
char* getChar(void);


int main()
{
    /*char cad[]="hola";
    mostrarCadena(cad);*/ //imprime la cadena de caracteres; caracter por caracter con su direccion de memoria

    char cad[51];
    strcpy(cad,getChar());
    printf("%s", cad);

    return 0;
}
void mostrarCadena(char* punteroCadena)
{
    while(*punteroCadena != '\0') //valida si el valor que contiene *punteroCadena es distinto de \0
    {
        printf("%c",*punteroCadena);
        punteroCadena++; //suma 1 multipicado los bytes que equivalen al tipo de dato (en char es 1*1byte)
    }
}

char* getChar(void)
{
    char letra[]="abc";
    return letra;
}


