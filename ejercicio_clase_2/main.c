/******************************************************************
* Programa: Ejemplo Clase 2
*
* Objetivo:
*   -Realizar un programa que solicite cinco números e imprima por pantalla el
*    promedio, el máximo y el mínimo.
*
* Aspectos a destacar:
*   -El uso de bucles para pedir un número tras otro
*   -El uso de acumuladores, se tiene que guardar la suma para luego hacer
*    el promedio
*   -El uso del if para preguntar si el numero ingresado es mayor o menor
*    para guardar los máximos y mínimos
*
* Version: 0.1 del 29 diciembre de 2015
* Autor: Mauricio Dávila
* Revisión: Ernesto Gigliotti
*
* *******************************************************************/

#include <stdio.h>
#include <stdlib.h>

int sacarMaximoMinimo();

int main()
{
    sacarMaximoMinimo();
    return 0;
}
int sacarMaximoMinimo()
{

    int numero;
    int maximo;
    int minimo;
    int promedio;
    int suma=0;
    int flag=0;
    int contador=0;
  do{
        printf("Ingrese un numero: ");
        scanf("%d", &numero);

        if(maximo<numero||flag==0)
        {
            maximo=numero;
        }
        if(minimo>numero||flag==0)
        {
            minimo=numero;
            flag=1;
        }
    suma=numero+suma;
    contador++;
  }while(numero!=-1);
        promedio=suma/contador;
        printf("El numero maximo ingresado es: %d ",maximo);
        printf("El numero minimo ingresado es: %d ",minimo);
        printf("El promedio ingresado es: %d ",promedio);
     return 0;
}
