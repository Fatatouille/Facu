#include <stdio.h>

int main(){
    char CC;
    int total=0, aux=0;

    printf("Ingrese una frase terminada en un punto: ");
    fflush(stdin);
    scanf("%c", &CC);

    while(CC !='.'){

        if(CC=='a' || CC=='A'){
            aux++;
        }
        if(CC=='e' || CC=='E'){
            aux++;
        }
        if(CC=='o' || CC=='O'){
            aux++;
        }
        if(CC==' ' && aux>0){
            total++;
            aux=0;
        }

        scanf("%c", &CC);
    }
    if(aux>0){
        total++;
    }

    printf("Cantidad de palabras con vocales abiertas: %d", total);

    return 0;
}