#include <stdio.h>
#include <stdlib.h>
#include "publicidad.h"
#include "pantalla.h"
#include "empleado.h"
#include "funciones_string.h"
#include <string.h>
#include <ctype.h>
#define CANTPANTALLAS 100
#define CANCONTRATACIONES 1000

int main()
{
    char seguir='s'; //MENU
    int opcion; //MENU
    int posicionPantalla;
    Pantalla pantalla[CANTPANTALLAS];
    Publicidad publicidad[CANCONTRATACIONES];

    if (pantalla_Inicializar(pantalla, CANTPANTALLAS)==0)
    {
        printf("Se inicializo correctamente pantalla\n");
    }
    if (publicidad_Inicializar(publicidad, CANCONTRATACIONES)==0)
    {
        printf("Se inicializo correctamente publicidad\n");
    }

     while (seguir=='s')
    {
        printf("\t\tMENU");
        printf("\n\n1-Alta de pantalla");
        printf("\n\n2-Modificar datos de pantalla");
        printf("\n\n3-Baja de pantalla");
        printf("\n\n4-Contratar una publicidad");
        printf("\n\n5-Modificar condiciones de publicación");
        printf("\n\n6-Cancelar contratación");
        printf("\n\n7-Consulta facturación");
        printf("\n\n8-Listar contrataciones");
        printf("\n\n9-Listar​ ​ pantallas");
        printf("\n\n10-Informar");
        printf("\n\n11-Salir\n");

        do
        {
            printf("\n\t\tingrese opcion: ");
            scanf("\n%d",&opcion);
        }
        while (opcion<1 || opcion>11);

        switch (opcion)
        {
        case 1:
        if(pantalla_buscarLibre(pantalla,CANTPANTALLAS,&posicionPantalla)!=0)
        {
            printf("Se encuentra lleno\n\n");
        }
        else{
            pantalla_Alta(pantalla,CANTPANTALLAS,posicionPantalla);
        }


            break;

        case 2:


            break;

        case 3:

            break;
        case 4:



            break;

        case 5:


            break;

        case 6:

            break;
        case 7:



            break;

        case 8:


            break;

        case 9:

            break;
        case 10:

            break;

        case 11:
            seguir='f';
            break;
        }
    }
    return 0;
}
