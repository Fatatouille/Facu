#include <stdio.h>

int main(){
    char CC;
    int cont=0, corta=0, larga=0;

    printf("Ingrese una frase terminada con un punto: ");
    fflush(stdin);
    scanf("%c", &CC);

    while(CC!='.'){
        if(CC==' '){
            if(corta==0){
                corta=cont;
                larga=cont;
            }
            if(cont>larga){
                larga=cont;
            }
            if(cont<corta){
                corta=cont;
            }
            cont=0;
        }else{
            cont++;
        }
        scanf("%c", &CC);
    }
    
    if(cont>larga){
        larga=cont;
    }
    if(cont<corta && cont>0){
        corta=cont;
    }

    printf("Mayor tamano de palabra: %d\n", corta);
    printf("Mayor tamano de palabra: %d", larga);

    return 0;
}