#include <stdio.h>

int main(){
    int dni, cbu, opcion;
    float saldo, suma, resta;

    printf("dni: ");
    scanf("%d", &dni);

    printf("cbu: ");
    scanf("%d", &cbu);

    printf("saldo: ");
    scanf("%f", &saldo);

    printf("Menu de operaciones:\n");
    printf("1. Depositar dinero.\n2. Retirar dinero.\n3. Consultar saldo.\n4. Mostrar datos de la cuenta.\n5. Salir del programa.\n");
    scanf("%d", &opcion);

    switch (opcion)
    {
    case 1:
        printf("Monto a depositar: ");
        scanf("%f", &suma);
        saldo+=suma;
        printf("Operacion realizada correctamente. Saldo actual de %.2f", saldo);
        break;
    case 2:
        printf("Monto a retirar: ");
        scanf("%f", &resta);
        if(saldo-resta>=0){
            saldo-=resta;
            printf("Operacion realizada correctamente. Saldo restante de %.2f", saldo);
        }else{
            printf("No tiene suficiente saldo para esta extraccion.");
        }
        break;
    case 3:
        printf("Su saldo es de: %.2f", saldo);
        break;
    case 4:
        printf("Dni: %d\ncbu: %d", dni, cbu);
        break;
    case 5:
        printf("Adios!");
        break;
    default:
        printf("La opcion elegida no existe.");
        break;
    }

    return 0;
}