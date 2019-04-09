#ifndef UTN_H_INCLUDED
#define UTN_H_INCLUDED


int utn_getNumber(int* pNumero,int len,int max,int min,char* msg,char* msgError,int reintento);
int utn_getArrayNumber(int* pArrayNumero,int limite,int max,int min,char* msg,char* msgError, int reintento);
int calcularMinimo(int* pedirNumero, int limite, int* pMinimo);
int calcularMaximo(int* pedirNumero, int limite);
float calcularPromedio(int* pedirNumero, int limite);
int buscarDentroArray(int* pedirNumero,int limite);
int ordenarArray(int* pedirNumero,int limite);

#endif // UTN_H_INCLUDED
