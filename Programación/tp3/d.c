#include <stdio.h>

int main(){
    float total, precio=0, compra=0;
    int verificador, pago; //1/0
    int cuotas;

    printf("Compra carne?");
    scanf("%d", &verificador);
    if(verificador==1){
        printf("Precio: ");
        scanf("%f", &compra);
        printf("Lleva cerdo o pollo?");
        scanf("%d", &verificador);
        if(verificador==1){
            compra-=compra*0.1;
        }
        total+=compra;
    }

    printf("Compra pasta o panificados?");
    scanf("%d", &verificador);
    if(verificador==1){
        printf("Precio: ");
        scanf("%f", &compra);
        compra-=compra*0.1;
        total+=compra;
    }

    printf("Compra verduras o frutas?");
    scanf("%d", &verificador);
    if(verificador==1){
        printf("Precio: ");
        scanf("%f", &compra);
        compra-=compra*0.05;
        total+=compra;
    }

    printf("Compra forrajeria o dietetica?");
    scanf("%d", &verificador);
    if(verificador==1){
        printf("Precio: ");
        scanf("%f", &compra);
        compra-=compra*0.12;
        printf("Es celiaco?");
        scanf("%d", &verificador);
        if(verificador==1){
            compra-=compra*0.2;
        }
        total+=compra;
    }

    printf("Compra lacteos o huevos?");
    scanf("%d", &verificador);
    if(verificador==1){
        printf("Precio: ");
        scanf("%f", &compra);
        compra-=compra*0.08;
        total+=compra;
    }

    printf("Compra articulos de limpieza?");
    scanf("%d", &verificador);
    if(verificador==1){
        printf("Precio: ");
        scanf("%f", &compra);
        total+=compra;
    }

    printf("Abona con tarjeta o por transferencia/efectivo? (0 o 1)\n");
    scanf("%d", &pago);

    if(pago==0){
        printf("Cuantas cuotas?");
        scanf("%d", &cuotas);
        if(cuotas==3){
            total+=total*0.15;
        }
    }else{
        total-=total*0.1;
    }

    printf("%.2f", total);

    return 0;
}