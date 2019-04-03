#include <stdio.h>

void utn_pruebita(void)
{
    printf("Hola mundo desde utn.c\n");
}

int utn_getNumber(int* pNumero,int max,int min,char* msg,char* msgError, int reintento)
{
    int numero;
    int ret=-1;

    while(reintento>0)
    {
    printf("%s",msg);
    if(scanf("%d",&numero)==1)
    {
    if(numero>min&&numero<max)
    {
        //BIEN
        *pNumero=numero;
       ret=0;
       break;
    }
    else
    {
        printf("%s",msgError);
        //mal
    }
    }
    reintento--;
    printf("%s",msgError);
    reintento--;
    }

    return ret;
}
