#ifndef UTN_H_INCLUDED
#define UTN_H_INCLUDED


int utn_getNumber(int* pNumero,int len,int max,int min,char* msg,char* msgError,int reintento);
int utn_getArrayNumber(int* pArrayNumero,int limite,int max,int min,char* msg,char* msgError, int reintento);
int calcularPromedio(int* numbers,int len, float* pPromedio );

#endif // UTN_H_INCLUDED
