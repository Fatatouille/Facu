#include <stdio.h>

int main(){
        int incremento, decremento;

        printf("Ingrese dos enteros: \n");
        scanf("%d", &incremento);
        scanf("%d", &decremento);
        incremento++; //incremento=incremento+1;
        decremento--;
        printf("%d\n%d", incremento, decremento);
        return 0;
}