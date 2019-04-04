#include <stdio.h>


int utn_getArrayNumber(int* pArrayNumero,int limite,int max,int min,char* msg,char* msgError, int reintento)
{
    int i;
    int numero;
    int ret;
    for (i=o; i<limite; i++)
    {
        ret=utn_getNumber(&numero, max, min, msg, msgError, reintento )
        if (ret==1)
        {
            break;
        }
        pArrayNumero[i]=numero;

    }

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
