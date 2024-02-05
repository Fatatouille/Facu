#include <stdio.h>

int main(){
    int ch;

    scanf("%d", &ch);
    char conversion=ch;

    if(ch>47 && ch<58){
        printf("Es un numero");
    }else if(ch>64 && ch<91){
        printf("Es una letra mayuscula.\n");
        if(ch==65 || ch==69 || ch==73 || ch==79 || ch==85){
            printf("Ademas es la vocal %c", conversion);
        }
    }else if(ch>96 && ch<123){
        printf("Es una letra minuscula.\n");
        if(ch==97 || ch==101 || ch==105 || ch==111 || ch==117){
            printf("Ademas es la vocal %c", conversion);
        }
    }else{
        if(ch<20 || ch>255){
            printf("Caracter invalido");
        }else{
            printf("Es un caracter especial.\n");
            if(ch>41 && ch<44 || ch>44 || ch==37 || ch==64){
                printf("Su caracter es %c", conversion);
            }
        }
    }

    return 0;
}