#ifndef PANTALLA_H_INCLUDED
#define PANTALLA_H_INCLUDED

typedef struct
{
int idPantalla;
int isEmpty; //lleno=0 o vacio=1
char nombre[50];
char direccion [200];
float precio;
int tipo;

}Pantalla;

int pantalla_Inicializar(Pantalla* pantalla, int cantidad);
int pantalla_buscarLibre(Pantalla* pantalla, int cantidad, int* devuelve);
void pantalla_generadorId(Pantalla* pantalla,int pos, int* id);
int pantalla_Alta(Pantalla* pantalla,int cantidad,int devuelve);
int pantalla_asignarPantalla(Pantalla* pantalla,int posLibre);


#endif // PANTALLA_H_INCLUDED
