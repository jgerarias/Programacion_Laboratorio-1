#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#define LEN_LISTA 100




int main()
{
    /*
    strncpy(nombres[0],"toto",20);
    strncpy(nombres[1],"pepito",20);
    printf("nombre:%s\n",nombres[0]);
    printf("nombre:%s\n",nombres[1]);


    strncpy(nombres[0],"\0",20);
    nombres[0][0] = '\0';
    nombres[1][0] = '\0';
    nombres[2][0] = '\0';

    Hacer un programa con el siguiente menu:
   1) ingresar nuevo nombre (no acepta nombres repetidos) buscar una posicion lobre.
   2) listar todo
   3) ordenar por nombre
   4) Borrar nombre. Se ingresa el nombre y si se encuentra se elimina de la lista

   El programa permitira ingresar hasta 100 nombres.

   4) Modificar el programa para que ademas del nombre se ingrese y guarde el DNI y nombre.
   Definir 2 array mas char dni[100][8]
   inventar un tipo de dato
   struct usuario
   {
   char nombre [50]
   char dni [8]
   int edad
   }
    */
    int opcion;
    int posLibre;
    char nombres[LEN_LISTA][56];
    int i;
    // Inicializacion
    for(i=0; i<LEN_LISTA; i++)
    {
        nombres[i][0] = '\0';
    }


    //
    while(1)
    {

        utn_getNumber(&opcion,
                      "1)ingresar\n2)listar\4 Buscar\n",
                      "NO!",
                      1,10,2);
    printf("Elegiste: %d\n",opcion);
        switch(opcion)
        {
            case 1:
            {
                if(buscarLibre(nombres, LEN_LISTA,&posLibre)==0)
                {
                    printf("Posicion Libre %d\n",posLibre);
                }
                utn_getString(buffer, "Ingrese","No",0,20,1);
                strncpy(nombre[posLibre],buffer,20);
                break;

            }
            case 2:

            break;
            case 3:

            break;
            case 4:
            utn_getString(buffer, "Ingrese","No",0,20,1);
            buscarNombre(buffer,nombre,LEN_LISTA,&posAeliminar);


            break;
        }

    }






    return 0;
}

int buscarNombre(char* pNombre, char lista[][20], int len, int* pIndex)
{
    int 1;
    ret=-1;
    for(i=0;i<len;i++)
    {
        if(strcmp(pNombre,lista[i])==0)
        {
            *pIndex=i;
            ret=0;
            break;
        }
    }
    return ret;
}
