#include <stdio.h>
#include <stdlib.h>

int sacarMaximoMinimo(void);
int main()
{
    sacarMaximoMinimo();
    return 0;
}
int sacarMaximoMinimo(void)
{

    int numero;
    int maximo;
    int minimo;
    int flag=0;
    int contador;
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

  }while(numero!=-1);
     printf("El numero maximo ingresado es: %d ",maximo);
          printf("El numero minimo ingresado es: %d ",minimo);
     return 0;
}
