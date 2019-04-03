#include <stdio.h>
#include <stdlib.h>
#include"utn.h"

int main()
{
    int A;
    utn_pruebita();
    utn_getNumber(&A, 100, 0, "Ingrese numero", "Error reingrese numero ");

    return 0;
}

