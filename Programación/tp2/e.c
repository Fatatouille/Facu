#include <stdio.h>

int main(){
    float altura, radio, volumen, esfera;

    printf("Altura en metros: \n");
    scanf("%f", &altura);

    printf("Radio en milimetros: \n");
    scanf("%f", &radio);

    altura=altura*100;
    radio=radio/10;

    volumen=altura*3.14*(radio*radio);
    esfera=(4/3)*3.14*(radio*radio*radio);

    printf("El volumen del cilindro es: %.4f\n", volumen);
    printf("El volumen de la esfera es: %.4f", esfera);

    return 0;
}