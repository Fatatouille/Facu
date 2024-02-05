#include <stdio.h>

int main(){
    int a, b, c, d, perimetro;
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    if(a<0 || b<0 || c<0 || d<0){
        printf("Figura invalida");
    }else if(d>0){
        if(a==b && a==d && a==c){
            printf("La figura es un cuadrado");
            perimetro=4*a;
        }else if(a==b && b==c && a!=d){
            printf("Figura invalida");
        }
        else if((a==b && c==d && b!=c) || (a==c && b==d && b!=c) || (a==d && b==c && b!=a)){
            printf("La figura es un rectángulo");
            perimetro=a+b+c+d;
        }else{
            printf("Figura invalida");
        }
    }else{
        if(a==b && a==c){
            printf("La figura es un triangulo equilatero");
        }else if(a==b && b!=c){
            printf("La figura es un triangulo isosceles");
        }else{
            printf("La figura es un triangulo escaleno");
        }
        perimetro=a+b+c;
    }
    printf("\nEl perimetro es de %d", perimetro);

    return 0;
}