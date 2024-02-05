#include <stdio.h>

int main(){
    char CC;
    int a, e, o, total;
    a=e=o=total=0;

    printf("Ingrese una frase terminada en un punto: ");
    fflush(stdin);
    scanf("%c", &CC);

    while(CC !='.'){
        if(CC=='a' || CC=='A'){
            a++;
            total++;
        }
        if(CC=='e' || CC=='E'){
            e++;
            total++;
        }
        if(CC=='o' || CC=='O'){
            o++;
            total++;
        }

        scanf("%c", &CC);
    }

    printf("Cantidad de a: %d\nCantidad de e: %d\nCantidad de o: %d\nTotal: %d", a, e, o, total);

    return 0;
}