#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

/* estas estructuras estan en la libreria funciones.h
typedef struct TProducto
{
    char * Descripcion;
    char * Categoria;
    int Precio;
    int Stock;

}TProducto;

typedef struct Tnodo
{
    TProducto dato;
    struct Tnodo *siguiente;
}Tnodo;
*/

void nuevaLista(Tnodo **Start, Tnodo *lista);
Tnodo * CrearNodo(TProducto proveedor);
void filtrar(Tnodo **Start, float precio, Tnodo ** Inicio);
void filtroStock(Tnodo **Start, int stock, Tnodo **Inicio);
void liberarLista(Tnodo *Start);
int SinStock(Tnodo **Start);

int main()
{
    TProducto * ProductosDeProveedor1  = ProveedorDeLacteosPanaderiaLiquidos();
    MostrarProductosDeArreglo(ProductosDeProveedor1, 17, "Proveedor 1");

     
    // PUNTO 1. Insertar todos los productos en una única lista
    Tnodo *listaDeProductos=NULL, *Start=NULL;
    // ingrese su código aquí

    for (int i=0; i<17; i++){
        Tnodo * nuevoNodo=CrearNodo(*(ProductosDeProveedor1+i));
        nuevaLista(&Start, nuevoNodo);
    }
    listaDeProductos=Start;

    MostrarLista(listaDeProductos, "Todos los productos");
    // FIN PUNTO 1
    
    // PUNTO 2. Ingrese un precio y filtre los productos que tengan un precio mayor al ingresado
    Tnodo *productosFiltradosPorPrecio=NULL, *Inicio=NULL;
    float precio;
    printf("Ingrese precio: \n");
    scanf("%f", &precio); 
    printf("Precio ingresado: %f",precio);
    // ingrese su código aquí
    
    filtrar(&Start, precio, &Inicio);
    productosFiltradosPorPrecio=Inicio;

    printf("%d\n", Inicio->dato.Precio);

    MostrarLista(productosFiltradosPorPrecio, "Productos con precio filtrado");
    // FIN PUNTO 2

    // PUNTO 3. Contar productos sin stock y mostrar la cantidad
    int cantidadSinStock = SinStock(&Start); 
    //ingrese su código aquí

    MostrarCantidadSinStock(cantidadSinStock); 
    //FIN PUNTO 3
    
    // PUNTO 4. Desenlazar los productos sin stock y mostrarlos
    Tnodo *productosFiltradoPorStock=NULL;
    Tnodo *Start2=NULL;
    int stock;
    printf("Ingrese stock: \n");
    scanf("%d", &stock); 
    printf("Stock ingresado: %d",stock);
    // ingrese su código aquí
    
    filtroStock(&Start, stock, &Start2);
    productosFiltradoPorStock= Start2;

    MostrarLista(productosFiltradoPorStock, "Productos con stock mayor al ingresado");
    MostrarLista(listaDeProductos, "Productos con stock menor a al ingresado"); 
    // FIN PUNTO 4

    //PUNTO 5. Liberar todas las listas
    // ingrese su código aquí
    
    liberarLista(Start);
    liberarLista(Inicio);
    liberarLista(Start2);
    liberarLista(listaDeProductos);
    liberarLista(productosFiltradosPorPrecio);
    liberarLista(productosFiltradoPorStock);

    MostrarLista(listaDeProductos, "Lista vacia de listaDeProductos "); 
    MostrarLista(productosFiltradosPorPrecio, "Lista vacia de productosFiltradosPorPrecio");
    MostrarLista(productosFiltradoPorStock, "Lista vacia de productosSinStock");
    // FIN PUNTO 5
}

//pt1
Tnodo * CrearNodo(TProducto proveedor){
    Tnodo *NNodo = (Tnodo *) malloc (sizeof(Tnodo));
    NNodo->dato=proveedor;
    NNodo->siguiente=NULL;
    return NNodo;
}
void nuevaLista(Tnodo ** Start, Tnodo *lista){
    lista->siguiente=*Start;
    *Start=lista;
}
//pt2
void filtrar(Tnodo **Start, float precio, Tnodo ** Inicio){
    Tnodo *Aux=*Start;
    while(Aux!=NULL){
        if((float) (Aux->dato.Precio) > precio){
            Tnodo *Nodito= CrearNodo(Aux->dato);
            nuevaLista(Inicio, Nodito);
        }
        Aux = Aux->siguiente;
    }
}
//pt3
int SinStock(Tnodo **Start){
    Tnodo *Aux=*Start;
    int cont=0;
    while(Aux!=NULL){
        if(Aux->dato.Stock == 0){
            cont++;
        }
        Aux = Aux->siguiente;
    }
    return cont;
}
//BUSCA Y ELIMINA PT4
void filtroStock(Tnodo **Start, int stock, Tnodo **Inicio){
    Tnodo **Aux=Start;
    while(*Aux!=NULL){
        if(((*Aux)->dato.Stock) < stock){
            Tnodo *Nodito= CrearNodo((*Aux)->dato);
            nuevaLista(Inicio, Nodito);
            Tnodo *temp = *Aux;
            *Aux = (*Aux)->siguiente;
            free(temp);
        }else{
            Aux = &(*Aux)->siguiente;
        }
        
    }
}

//PT 5 LIBERA LISTAS
void liberarLista(Tnodo *Start){
    while(Start!=NULL){
        Tnodo *temp=Start;
        Start=Start->siguiente;
        free(temp);
    }
}