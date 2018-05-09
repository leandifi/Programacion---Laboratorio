#include "lib.h"
void inicializarId(eProgramadores persona[],eHoras hora[])
{
    int i,j;
    for(i=0; i<50; i++)
    {
        persona[i].id=0;
        hora[i].idProgramador=i+1;
        for(j=0; j<1000; j++)
        {
            hora[i].horas[j]=0;
            hora[i].idProyecto[j]=0;
        }
    }
}
int validarInt(int valor, int x, int y)
{
    while(valor<x || valor>y)
    {
        fflush(stdin);
        printf("Error, ingrese nuevamente (entre %d y %d): ",x,y);
        scanf("%d",&valor);
    }
    return valor;
}
void mostrarCategoria(eCategorias cate[],int id)
{
    int i;
    for(i=0; i<3; i++)
    {
        if(cate[i].idCategoria==id)
        {
            printf("%s",cate[i].descripcion);
        }
    }
}
void agregar(eProgramadores persona[])
{
    int i;
    char auxString[100];
    fflush(stdin);
    for(i=0; i<50; i++)
    {
        if(persona[i].id==0)
        {
            persona[i].id=i+1;
            printf("Ingrese Nombre: ");
            gets(auxString);
            fflush(stdin);
            while(strlen(auxString)>19 || strlen(auxString)<1 || auxString[0]==' ')
            {
                printf("Nombre vacio o demasiado largo, reingrese: ");
                gets(auxString);
                fflush(stdin);
            }
            strcpy(persona[i].nombre,auxString);
            printf("Ingrese Apellido: ");
            gets(auxString);
            fflush(stdin);
            while(strlen(auxString)>19 ||strlen(auxString)<1 || auxString[0]==' ')
            {
                printf("Apellido vacio o demasiado largo, reingrese: ");
                gets(auxString);
                fflush(stdin);
            }
            strcpy(persona[i].apellido,auxString);
            printf("Ingrese categoria/n(1)Senior - (2)SemiSenior - (3) - Junior\nSu opcion: ");
            scanf("%d",&persona[i].idCategoria);
            persona[i].idCategoria=validarInt(persona[i].idCategoria,1,3);
            break;
        }
        if(i==49)
            printf("Limite de programadores alcanzado, borre uno para agregar");
    }
}



void modificar(eProgramadores persona[],eCategorias cate[])
{
    int i,id,opcion;
    char auxString[100];
    printf("\n");
    for(i=0; i<50; i++)
    {
        if(persona[i].id!=0)
        {
            printf("ID: %d\nApellido: %s\nNombre: %s\nCategoria: ",persona[i].id,persona[i].apellido,persona[i].nombre);
            mostrarCategoria(cate,persona[i].idCategoria);
            printf("\n\n");
        }
    }
    printf("Ingrese el id que desea modificar: ");
    scanf("%d",&id);
    id=validarInt(id,1,50);
    while(persona[id-1].id==0)
    {
        printf("Ese id no existe, reingrese: ");
        scanf("%d",&id);
        id=validarInt(id,1,50);
    }
    fflush(stdin);
    printf("Ingrese que dato desea modificar\n(1-Nombre 2-Apellido 3-Categoria)\nSu opcion: ");
    scanf("%d",&opcion);
    fflush(stdin);
    opcion=validarInt(opcion,1,3);
    fflush(stdin);
    if(opcion==1)
    {
        printf("Ingrese Nombre: ");
        gets(auxString);
        fflush(stdin);
        while(strlen(auxString)>19 || strlen(auxString)<1 || auxString[0]==' ')
        {
            printf("Nombre vacio o demasiado largo, reingrese: ");
            gets(auxString);
            fflush(stdin);
        }
        strcpy(persona[id-1].nombre,auxString);
    }
    else
    {
        if(opcion==2)
        {
            printf("Ingrese Apellido: ");
            gets(auxString);
            fflush(stdin);
            while(strlen(auxString)>19 ||strlen(auxString)<1 || auxString[0]==' ')
            {
                printf("Apellido vacio o demasiado largo, reingrese: ");
                gets(auxString);
                fflush(stdin);
            }
            strcpy(persona[id-1].apellido,auxString);
        }
        else
        {
            printf("Ingrese categoria/n(1)Senior - (2)SemiSenior - (3) - Junior\nSu opcion: ");
            scanf("%d",&persona[id-1].idCategoria);
            persona[id-1].idCategoria=validarInt(persona[id-1].idCategoria,1,3);
        }
    }

}

void eliminar(eProgramadores persona[],eCategorias cate[],eHoras proyectos[])
{
    int i,j,id;
    printf("\n");
    for(i=0; i<50; i++)
    {
        if(persona[i].id!=0)
        {
            printf("ID: %d\nApellido: %s\nNombre: %s\nCategoria: ",persona[i].id,persona[i].apellido,persona[i].nombre);
            mostrarCategoria(cate,persona[i].idCategoria);
            printf("\n\n");
        }
    }
    printf("Ingrese el id que desea eliminar: ");
    scanf("%d",&id);
    while(persona[id-1].id==0)
    {
        printf("Ese id no existe, reingrese: ");
        scanf("%d",&id);
    }
    for(i=0; i<50; i++)
    {
        if(proyectos[i].idProgramador==persona[id-1].id)
        {
            for(j=0; j<1000 && proyectos[i].idProyecto[j]!=0; j++)
            {
                proyectos[i].idProyecto[j]=0;
            }
        }
    }
    persona[id-1].id=0;
}

void asignar(eProgramadores persona[], eProyecto proyecto[], eHoras horas[])
{
    int i,id,opcion;
    printf("\n");
    for(i=0; i<50; i++)
    {
        if(persona[i].id!=0)
        {
            printf("ID: %d\nApellido: %s\nNombre: %s\n\n",persona[i].id,persona[i].apellido,persona[i].nombre);
        }
    }
    printf("Ingrese el id del programador al que desea asignarle un proyecto: ");
    scanf("%d",&id);
    while(persona[id-1].id==0)
    {
        printf("Ese id no existe, reingrese: ");
        scanf("%d",&id);
    }
    printf("Ingrese el proyecto que desea asignarle\n (1)Java (2)C# (3)C (4)C++ (5)Python: ");
    scanf("%d",&opcion);
    for(i=0; i<PROY; i++)
    {
        if(horas[id-1].idProyecto[i]==opcion)
        {
            printf("Este programador ya tiene asignado ese proyecto, solo podra modificar la cantidad de horas\n");
            break;
        }
        else
        {

            if(horas[id-1].idProyecto[i]==0)
            {
                horas[id-1].idProyecto[i]=opcion;
                break;
            }
        }
    }
    printf("Ingrese las horas que le asignara a ese proyecto: ");
    scanf("%d",&horas[id-1].horas[i]);
    while(horas[id-1].horas<=0)
    {
        printf("Las horas deben ser mayores a 0, reingrese: ");
        scanf("%d",&horas[id-1].horas[i]);
    }
}

void listadoProg(eProgramadores persona[],eCategorias cate[],eProyecto proyecto[],eHoras horas[])
{
    int i;
    printf("\n");
    for(i=0; i<50; i++)
    {
        if(persona[i].id!=0)
        {
            printf("ID: %d\nApellido: %s\nNombre: %s\nCategoria: ",persona[i].id,persona[i].apellido,persona[i].nombre);
            mostrarCategoria(cate,persona[i].idCategoria);
            printf("\nProyecto(s): ");
            mostrarProyecto(cate[(persona[i].idCategoria-1)].pagoXHora,horas,proyecto,persona[i].id);
            printf("\n\n");
        }
    }
}




void mostrarProyecto(int pago,eHoras horas[],eProyecto proyecto[],int id)
{
    int i,j,k;
    for(i=0; i<50; i++)
    {
        if(id==horas[i].idProgramador)
        {
            for(j=0; j<PROY; j++)
            {
                for(k=0; k<PROY; k++)
                {
                    if(horas[i].idProyecto[j]==proyecto[k].idProyecto && proyecto[k].idProyecto!=0)
                    {
                        printf("%s($%d)",proyecto[k].nombre,horas[i].horas[j]*pago);
                        break;
                    }
                }
            }

        }

    }
}

void listadoProy(eProyecto proyecto[],eHoras hora[],eProgramadores persona[])
{
    int i,j,k,l;
    int junior,senior,semisenior;

    for(i=0; i<PROY; i++)
    {
        junior=0;
        senior=0;
        semisenior=0;
        if(proyecto[i].idProyecto!=0)
        {
            printf("ID: %d\nNombre: %s\n",proyecto[i].idProyecto,proyecto[i].nombre);
            for(j=0; j<50; j++)
            {
                for(k=0; k<PROY; k++)
                {
                    if(proyecto[i].idProyecto==hora[j].idProyecto[k])
                    {
                        for(l=0; l<50; l++)
                        {
                            if(hora[j].idProgramador==persona[l].id)
                            {
                                if(persona[l].idCategoria==1)
                                {
                                    senior++;
                                }
                                else
                                {
                                    if(persona[l].idCategoria==2)
                                    {
                                        semisenior++;
                                    }
                                    else
                                    {
                                        junior++;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            printf("Senior: %d\nSemiSenior: %d\nJunior: %d\n\n",senior,semisenior,junior);
        }
    }
}

void listaProyProg(eProgramadores persona[],eHoras hora[], eProyecto proyecto[])
{
    int i,j,id;
    printf("\n");
    for(i=0; i<50; i++)
    {
        if(persona[i].id!=0)
        {
            printf("ID: %d\nApellido: %s\nNombre: %s",persona[i].id,persona[i].apellido,persona[i].nombre);
            printf("\n");
        }
    }
    printf("Ingrese un id: ");
    scanf("%d",&id);
    id=validarInt(id,1,50);

    while(hora[id-1].idProyecto[0]==0 && persona[id-1].id==0)
    {
        printf("El id debe ser de un usuario activo, reingrese: ");
        scanf("%d",&id);
        id=validarInt(id,1,50);
    }
    printf("\nProyectos: ");
    for(i=0; i<PROY; i++)
    {
        for(j=0; j<PROY; j++)
        {
            if(hora[id-1].idProyecto[i]!=0 && hora[id-1].idProyecto[i]==proyecto[j].idProyecto)
            {
                printf(" %s -",proyecto[j].nombre);
            }
            else
            {
                if(hora[id-1].idProyecto[0]==0)
                {
                    printf("El usuario no tiene proyectos activos");
                    j=1000;
                    i=1000;
                }
            }
        }
    }
}


void demandante(eDemandante cantidades[],eHoras horas[],eProyecto proyecto[])
{
    int i,j,k,l;
    l=0;
    for(i=0; i<PROY; i++)
    {
        cantidades[i].idProyecto=proyecto[i].idProyecto;
        cantidades[i].contador=0;
        for(j=0; j<PROY; j++)
        {
            for(k=0; k<50; k++)
            {
                if(cantidades[i].idProyecto==horas[k].idProyecto[j] && horas[k].idProyecto!=0)
                {
                    cantidades[i].contador++;
                }
            }
        }
    }
    l=cantidades[0].contador;
    for(i=0; i<PROY; i++)
    {
        if(cantidades[i].contador>l && horas[i].idProyecto!=0)
        {
            l=cantidades[i].contador;
        }
    }
    if(l!=0)
    {
        printf("Con %d programadores, el-los proyectos mas demandantes es-son: ",l);
        for(i=0; i<PROY; i++)
        {
            if(cantidades[i].contador==l && horas[i].idProyecto!=0)
            {
                printf("%s - ",proyecto[i].nombre);
            }
        }
    }
    else
    {
        printf("No hay programadores con proyectos asignados");
    }
}

void totalProgramador(eProgramadores persona[], eHoras horas[], eCategorias cate[],eProyecto proyecto[])
{
    int i,j,k,a;
    int sueldo;
    for(a=0; a<50; a++)
    {
        if(persona[a].id!=0)
        {
            sueldo=0;
            printf("ID: %d\nNombre: %s\nApellido: %s\n",persona[a].id,persona[a].nombre,persona[a].apellido);
            printf("Pago total:");
            for(i=0; i<50; i++)
            {
                if(persona[a].id==horas[i].idProgramador)
                {
                    for(j=0; j<PROY; j++)
                    {
                        for(k=0; k<PROY; k++)
                        {
                            if(horas[i].idProyecto[j]==proyecto[k].idProyecto && proyecto[k].idProyecto!=0 && horas[i].horas[j]!=0)
                            {
                                sueldo+=(horas[i].horas[j]*cate[(persona[a].idCategoria-1)].pagoXHora);
                                break;
                            }
                        }
                    }

                }
            }
            printf("%d\n", sueldo);

        }
    }
}

void totalProyecto(eProgramadores persona[], eHoras horas[], eCategorias cate[],eProyecto proyecto[])
{
    int i,j,k,l,m,n;
    int total;
    for(i=0; i<PROY; i++)
    {
        total=0;
        printf("Proyecto: %s\n",proyecto[i].nombre);
        for(j=0; j<50; j++)
        {
            for(n=0; n<PROY; n++)
            {
                if(proyecto[i].idProyecto==horas[j].idProyecto[n])
                {
                    for(k=0; k<50; k++)
                    {
                        if(horas[j].idProgramador==persona[k].id)
                        {
                            for(l=0; l<3; l++)
                            {
                                if(persona[k].idCategoria==cate[l].idCategoria)
                                {
                                    for(m=0; m<PROY; m++)
                                        if(horas[j].horas[m]>0 && cate[l].pagoXHora!=0)
                                        {
                                            total+=horas[j].horas[m]*cate[l].pagoXHora;
                                            break;
                                        }
                                }
                            }
                        }
                    }
                }

            }
        }
        printf("Total: $%d\n\n",total);
    }
}

void limpiar()
{
    printf("\nFinalizado, presione una tecla para continuar...");
    getch();
    system("cls");
}


void cargarCategorias(eCategorias categoria[])
{
    int i;
    int pagos[3]= {300,200,100};
    char desc[3][20]= {"Senior","SemiSenior","Junior"};
    for(i=0; i<3; i++)
    {
        categoria[i].idCategoria=i+1;
        strcpy(categoria[i].descripcion,desc[i]);
        categoria[i].pagoXHora=pagos[i];
    }

}

void cargarProyectos(eProyecto proyecto[])
{
    int i;
    char desc[PROY][20]= {"Java","C#","C","C++","Python"};
    for(i=0; i<PROY; i++)
    {
        proyecto[i].idProyecto=i+1;
        strcpy(proyecto[i].nombre,desc[i]);
    }
}

void hardCodeo(eProgramadores persona[],eHoras proyecto[])
{
    int i;
    char nombre[10][20]= {"Jose","Magali","Ramses","Omar","Juan","Carlos","Pepe","Enrique","Pedro","Tomas"};
    char apellido[10][20]= {"Juanes","Casaux","Casaux","Don","Diaz","Lopez","Garcia","Nadal","Perez","Cono"};
    int id[10]= {1,2,3,4,5,6,7,8,9,10};
    int categoria[10]= {1,3,2,3,1,2,3,2,1,3};
    int proyectos[10]= {1,3,4,5,2,1,3,4,4,2};
    for(i=0; i<10; i++)
    {
        strcpy(persona[i].apellido,apellido[i]);
        strcpy(persona[i].nombre,nombre[i]);
        persona[i].id=id[i];
        persona[i].idCategoria=categoria[i];
        proyecto[i].horas[0]=i+1;
        proyecto[i].idProgramador=id[i];
        proyecto[i].idProyecto[0]=proyectos[i];
    }

}

int opcionesMenu(eProgramadores persona[])
{
    int i;
    for(i=0; i<50; i++)
        if(persona[i].id!=0)
        {
            return 1;
            break;
        }
    return 0 ;
}
