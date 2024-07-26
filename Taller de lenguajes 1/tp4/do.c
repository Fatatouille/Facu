#include <stdio.h>

struct Tarea{
    int TareaID;
    char *Descripcion;
    int Duracion;
}typedef Tarea;
struct Nodo{
    Tarea T;
    Nodo *Siguiente;
}typedef Nodo;

void CargaTareas();

int main(){
    Nodo *Start=NULL;

    return 0;
}