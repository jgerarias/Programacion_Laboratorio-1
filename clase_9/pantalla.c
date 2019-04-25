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

int pantalla_Inicializar(Pantalla* pantalla, int cantidad)
{
    int ret=1;
    for (int i=0; i<cantidad;i++)
    {
        pantalla[i].isEmpty=1;
        ret=0;
    }

    return ret;
}

int pantalla_buscarLibre(Pantalla* pantalla, int cantidad, int* devuelve)
{
    int ret;
    for (int i=0; i<cantidad;i++)
    {
        if (pantalla[i].isEmpty==1)
        {
            *devuelve=i;
            ret=0;
            break;
        }

        ret=1;
    }

    return ret;
}

int pantalla_Alta(Pantalla* pantalla, int cantidad, int posLibre)
{
    int ret=1;

    if(getString(pantalla[posLibre].nombre,"\nIngrese nombre :", "\nNo ingreso correctamente ",3,50,3)==0 &&

    getStringConNum(pantalla[posLibre].direccion, "\nIngrese Direccion: ", "\nError de ingreso ",10,200,3)==0 &&

    utn_getFloat(pantalla[posLibre].precio, "\nIngrese precio: ", "\nError de ingreso ",2,100000,3)==0 &&
    pantalla_asignarPantalla(pantalla,posLibre)==0)


    return ret;
}

int pantalla_asignarPantalla(Pantalla* pantalla, int posLibre)
{
    int ret=1;
    Pantalla auxPantalla;

    printf("\n\n1-Pantallas​ ​ LCD​ ​ - ​ ​ Ubicados​ ​ en​ ​ paseos​ ​ comerciales");
    printf("\n\n2-Pantallas​ Gigantes​ ​ Led​ ​ - ​ ​ Ubicadas​ ​ en​ ​ la​ ​ vía​ ​ pública");
    printf("\n\nIngrese la opcion de la pantalla deseada: ");
    scanf("%d",auxPantalla.tipo);
    if(auxPantalla.tipo==1||auxPantalla.tipo==2)
    {
        pantalla[posLibre].tipo=auxPantalla.tipo;
        ret=0;
    }
    else{
    printf("No ingreso ni 1 ni 2 ");
    }

    return ret;
}

