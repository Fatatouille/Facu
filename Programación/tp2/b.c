#include <stdio.h>

int main(){
        float lengua, matematicas, ciencias, promedio;

        printf("Nota de lengua: \n");
        scanf("%f", &lengua);

        printf("Nota de ciencias: \n");
        scanf("%f", &ciencias);

        printf("Nota de matematicas: \n");
        scanf("%f", &matematicas);

        promedio=(matematicas+lengua+ciencias)/3;

        printf("El promedio es de %.2f", promedio);
        return 0;
}