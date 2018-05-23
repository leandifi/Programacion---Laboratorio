#include <stdio.h>
#include <stdlib.h>
#include "Person.h"


int main()
{
    Person* personArray[10];
    int i, edad, algo;
    for(i = 0; i < 10; i++)
    {
        personArray[i] = person_new(i,i);
    }
    for(i = 0; i < 10; i++)
    {
        printf("Ingrese la edad:");
        scanf("%d", &edad)
        person_setAge(personArray[i],edad);
        printf("Ingrese la algo:");
        scanf("%d", &algo)
        person_setSomething(personArray[i],algo);
    }
    for(i = 0; i < 10; i++)
    {
        printf("\nAge: %2d",person_getAge(personArray[i]));
    }
    scanf(" ");
    return 0;
}

