#include <stdio.h>

int main(){
    float monto, recargo, descuento;

    printf("Monto: \n");
    scanf("%f", &monto);

    printf("Descuento: \n");
    scanf("%f", &descuento);

    recargo=monto*1.15;
    descuento=recargo-((recargo*descuento)/100);

    printf("El monto incial es de %.2f, se aplica un recargo que lo deja en %.2f y con el descuento aplicado, el precio final es de %.2f", monto, recargo, descuento);

    return 0;
}