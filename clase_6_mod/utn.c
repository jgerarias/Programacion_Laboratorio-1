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
    int ret=0;
    for (i=0; i<limite; i++)
        {
            ret=utn_getNumber(&numero,limite, max, min, msg, msgError, reintento );
            if (ret==1)
            {
                break;
            }
            pArrayNumero[i]=numero;
        }
        return 0;
}
int calcularMinimo(int* pedirNumero, int limite, int* pMinimo)
{
    int i;
    int aux;
    for (i=0; i<limite; i++)
    {
        if (aux>pedirNumero[i]||i==0)
        {
            aux=pedirNumero[i];
        }
        *pMinimo=aux;
    }
    return 0;
}
int calcularMaximo(int* pedirNumero, int limite)
{
    int i;
    int aux;
    for (i=0; i<limite; i++)
    {
        if (aux<pedirNumero[i]||i==0)
        {
            aux=pedirNumero[i];
        }
    }
    return aux;
}
float calcularPromedio(int* pedirNumero,int limite)
{
    int i;
    int aux=0;
    float promedio;
    for (i=0; i<limite; i++)
    {
        aux=pedirNumero[i]+aux;
    }
    promedio=aux/limite;
    return promedio;
}
int ordenarArray(int* pedirNumero,int limite)
{
    int i;
    int j;
    int aux;
    for(i=0;i<limite-1;i++)
    {
        for(j=i+1;j<limite;j++)
            {
            if(pedirNumero[i]>pedirNumero[j])
                {
                    aux=pedirNumero[i];
                    pedirNumero[i]=pedirNumero[j];
                    pedirNumero[j]=aux;
                }
            }
    }
    for (i=0; i<limite; i++)
    {
        printf("%i",pedirNumero[i]);
    }
    return 0;
}
int buscarDentroArray(int* pedirNumero,int limite)
{
    int i;
    int flag=0; // Supongo que el número no lo encuentro
    int aux;

    printf("Ingrese numero a buscar");
    scanf("%d",&aux);
    for(i=0;i<limite;i++)
        {
            if(aux==pedirNumero [i])
                {
                    printf("Se encontro el numero ");
                    flag=1; // si lo encontro, pongo el flag en 1
                }
        }
    if(flag==0)
    printf("El numero no se encontro");
    return 0;
}


