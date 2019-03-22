#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD_REP 3

float suma();
float promedio();

int main()
{
    if(suma() == 0)
    {
        printf("Todo bien\n");
    }
    promedio();

    return 0;
}

float suma()
{
    float num1;
    float num2;
    float resultado;

    printf("Ingrese primer numero\n");
    scanf("%f", &num1);
    printf("Ingrese segundo numero\n");
    scanf("%f", &num2);
    resultado = num1+num2;
    printf("%.2f + %.2f = %.2f\n", num1, num2, resultado);

    return 0;
}

float promedio()
{
    int i;
    float num;
    float acum=0;
    float numPromedio;

    for(i=0;i<CANTIDAD_REP;i++)
    {
        printf("Ingresar numero\n");
        scanf("%f", &num);
        acum += num;
    }
    numPromedio = acum/CANTIDAD_REP;
    printf("%.2f / 3 : %.2f\n", acum, numPromedio);

    return 0;
}
