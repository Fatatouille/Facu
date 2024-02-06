#include <stdio.h>

void invertirNumero(int a);

int main(){
    int num;

    scanf("%d", &num);
    invertirNumero(num);

    return 0;
}

void invertirNumero(int a)
{
    int reversa=0, impar=0;

    while(a!=0){
        reversa=reversa*10 + a%10;
        if((a%10)%2!=0) impar++;
        a/=10;
    }

    printf("Numero invertido: %d - Digitos impares: %d", reversa, impar);
}