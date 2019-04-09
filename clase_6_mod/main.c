#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#define LEN 5

int main()
{
    int pedirNumero[LEN];

    int minimo;
    int maximo;
    float promedio;
    int max=100;
    int min=0;

    utn_getArrayNumber(pedirNumero,LEN,max,min,"Ingrese numero: ","Error reingrese numero: ", 3);
    calcularMinimo(pedirNumero,LEN,minimo);
    maximo=calcularMaximo(pedirNumero,LEN);
    promedio=calcularPromedio(pedirNumero,LEN);
    printf("El minimo es:%d\n",minimo);
    printf("El maximo es: %d\n",maximo);
    printf("El promedio es:%.2f\n",promedio);
    buscarDentroArray(pedirNumero,LEN);
    ordenarArray(pedirNumero,LEN);

}

