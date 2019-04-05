#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#define LEN 10

int main()
{
    int pedirNumer;
    int numbers[LEN];
    float promedio;
    int max=100;
    int min=0;

    utn_getArrayNumber(pedirNumer,LEN,max,min,"Ingrese numero","Error reingrese numero", 3);
    calcularPromedio(numbers,LEN,promedio);

    printf("%f.2",promedio);
}

