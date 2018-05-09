#include "lib.h"
int main()
{
    eProgramadores programador[50];
    eCategorias categoria[3];
    eProyecto proyecto[1000];
    eHoras horas[50];
    eDemandante demandantes[1000];
    char seguir='s';
    int opcion,menu;
    inicializarId(programador,horas);
    cargarCategorias(categoria);
    cargarProyectos(proyecto);
    hardCodeo(programador,horas);
    do
    {
        menu=opcionesMenu(programador);
        if(menu==1)
        {
            opcion=0;
            printf("1-ALTA PROGRAMADOR\n");
            printf("2-MODIFICAR DATOS DEL PROGRAMADOR\n");
            printf("3-BAJA DEL PROGRAMADOR\n");
            printf("4-ASIGNAR PROGRAMADOR A PROYECTO\n");
            printf("5-LISTADO DE PROGRAMADORES\n");
            printf("6-LISTADO DE TODOS LOS PROYECTOS\n");
            printf("7-LISTAR PROYECTOS DE PROGRAMADOR\n");
            printf("8-PROYECTO DEMANDANTE\n");
            printf("9-Sueldo programadores\n");
            printf("10-Total proyectos\n");
            printf("11-SALIR\n");

            scanf("%d",&opcion);
        }
        else
        {
            opcion=0;
            printf("1-ALTA PROGRAMADOR\n");
            printf("9-SALIR\n");
            scanf("%d",&opcion);
            while(opcion!=1 && opcion!=11)
            {
                printf("Error, reingrese: ");
                scanf("%d",&opcion);
            }
        }
        switch(opcion)
        {
        case 1:
            agregar(programador);
            limpiar();
            break;
        case 2:
            modificar(programador,categoria);
            limpiar();
            break;
        case 3:
            eliminar(programador,categoria,horas);
            limpiar();
            break;
        case 4:
            asignar(programador,proyecto,horas);
            limpiar();
            break;
        case 5:
            listadoProg(programador,categoria,proyecto,horas);
            limpiar();
            break;
        case 6:
            listadoProy(proyecto,horas,programador);
            limpiar();
            break;
        case 7:
            listaProyProg(programador,horas,proyecto);
            limpiar();
            break;
        case 8:
            demandante(demandantes,horas,proyecto);
            limpiar();
            break;
        case 9:
            totalProgramador(programador,horas,categoria,proyecto);
            break;
        case 10:
            totalProyecto(programador, horas,categoria,proyecto);
            break;
        case 11:
            seguir='n';
            break;
        default:
            printf("Error, presione una tecla para reingresar...");
            getch();
            system("cls");
            break;

        }
        fflush(stdin);
    }
    while(seguir!='n');

    return 0;
}
