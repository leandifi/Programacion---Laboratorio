#ifndef LIB_H_INCLUDED
#define LIB_H_INCLUDED
#define PROY 5
#include <strings.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
typedef struct
{
    int id;
    char nombre[20];
    char apellido[20];
    int idCategoria;
} eProgramadores;
typedef struct
{
    int idCategoria;
    char descripcion[20];
    int pagoXHora;
} eCategorias;
typedef struct
{
    int idProyecto;
    char nombre[20];
} eProyecto;
typedef struct
{
    int idProgramador;
    int horas[1000];
    int idProyecto[1000];
} eHoras;
typedef struct
{
    int idProyecto;
    int contador;
} eDemandante;

/** \brief Valida que el rango de un numero entero este entre dos valores
 *
 * \param Numero entero a comprobar
 * \param Numero inicial
 * \param Numero final
 * \return Numero entero validado
 *
 */
int validarInt(int,int,int);
/** \brief Inicializa los ID
 *
 * \param Estructura 1 a inicializar
 * \param estructura 2 a inicializar
 * \return void
 *
 */
void inicializarId(eProgramadores[],eHoras[]);

/** \brief Agrega informacion a una estructura
 *
 * \param Estructura a modificar
 * \return void
 *
 */
void agregar(eProgramadores[]);

/** \brief Carga informacion en una estructura
 *
 * \param Estructura a cargar
 * \return void
 *
 */
void cargarCategorias(eCategorias[]);

/** \brief Carga informacion en una estructura
 *
 * \param Estructura a cargar
 * \return void
 *
 */
void cargarProyectos(eProyecto[]);

/** \brief Modifica datos de estructuras
 *
 * \param Estructura que contiene indices y nombres
 * \param Estructura que contiene un nombre y su indice
 * \return void
 *
 */
void modificar(eProgramadores[],eCategorias[]);

/** \brief Inicializa un id a eleccion de una estructura
 *
 * \param Estructura que contiene el indice a borrar
 * \param Estructura que contiene datos de la estructura 1
 * \param Estructura que contiene un dato relacionado con la estructura 1
 * \return void
 *
 */
void eliminar(eProgramadores[],eCategorias[],eHoras[]);

/** \brief Imprime en pantalla los nombres (strings) que corresponden a los id de categorias
 *
 * \param Estructura que contiene indices y nombres
 * \param Numero entero que representa el id a imprimir
 * \return void
 *
 */
void mostrarCategoria(eCategorias[],int);

/** \brief Asigna relaciones
 *
 * \param Estructura que contiene indices y nombres
 * \param Estructura que contiene un nombre y su indice
 * \param Estructura que contiene los ID-relaciones
 * \return void
 *
 */
void asignar(eProgramadores[],eProyecto[], eHoras[]);

/** \brief Lista datos ordenados crecientemente por su ID
 *
 * \param Estructura que contiene indices y nombres
 * \param Estructura que contiene un nombre y su indice
 * \param Estructura que contiene un nombre y su indice
 * \param estructura que contiene los ID-relaciones
 * \return void
 *
 */
void listadoProg(eProgramadores[],eCategorias[],eProyecto[],eHoras[]);

/** \brief Lista en base a una categoria relacionada
 *
 * \param Estructura que contiene los ID-relaciones
 * \param Estructura que contiene un nombre y su indice
 * \param numero entero
 * \param numero entero
 * \return void
 *
 */
void mostrarProyecto(int,eHoras[],eProyecto[],int);

/** \brief Lista en base a una categoria relacionada
 *
 * \param Estructura que contiene un dato y su indice
 * \param Estructura que contiene ID-relaciones
 * \param Estructura que contiene indices y nombres
 * \return void
 *
 */
void listadoProy(eProyecto[],eHoras[],eProgramadores[]);

/** \brief Lista en base a una categoria relacionada
 *
 * \param Estructura que contiene indices y nombres
 * \param Estructura que contiene ID-relaciones
 * \param Estructura que contiene un dato y su indice
 * \return void
 *
 */
void listaProyProg(eProgramadores[],eHoras[],eProyecto[]);

/** \brief Busca el elemento con mas repeticiones en arrays relacionados
 *
 * \param Estructura que contiene un indice y su contador
 * \param Estructura que contiene ID-relaciones
 * \param Estructura que contiene un dato y su indice
 * \return void
 *
 */
void demandante(eDemandante[],eHoras[],eProyecto[]);

/** \brief Espera que el usuario presione una tecla para limpiar la consola
 */
void limpiar();

/** \brief Verifica si los id's son todos 0
*
* \param Estructura que contiene los id
*/
int opcionesMenu(eProgramadores[]);

/** \brief Carga valores preestablecidos en la estructura
*
* \param Estructura en la que se cargarán los valores
*/
void hardCodeo(eProgramadores[],eHoras[]);

void totalProgramador(eProgramadores persona[], eHoras horas[], eCategorias cate[],eProyecto proyecto[]);
#endif // LIB_H_INCLUDED
