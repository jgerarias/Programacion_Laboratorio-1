#include <stdio.h>


int utn_getNumber(int* pNumero,int len, int max,int min,char* msg,char* msgError, int reintento)
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
int utn_getArrayNumber(int* pArrayNumero,int limite,int max,int min,char* msg,char* msgError, int reintento)
{
    int i;
    int numero;
    int ret;
    for (i=o; i<limite; i++)
        {
            ret=utn_getNumber(&numero,len, max, min, msg, msgError, reintento )
            if (ret==1)
            {
                break;
            }
            pArrayNumero[i]=numero;
        }
}
int calcularPromedio(int* numbers,int len, float* pPromedio )
{
    int aux=0;
    for(i=0;i<len;i++)
    {
        aux=numbers[i]+aux;
    }
    *promedio=aux/len;
    return 0;
}
