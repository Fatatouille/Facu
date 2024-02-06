#include <stdio.h>
#include <ctype.h>

void mostrarPrimerCaracter(char caracter);
int esVocal(char Caracter);

int main(){
    int aux=0, vocales=0, digitos=0;
    char cadena;

    printf("Escriba una frase terminada con punto: ");
    fflush(stdin);
    scanf("%c", &cadena);

    while(cadena!='.'){
        
        vocales+=esVocal(cadena);

        if(cadena=='a' || cadena=='A'){
            printf("@");
        }else if(cadena=='o' ||cadena=='O'){
            printf("#");
        }else{
            if(aux==0){
                mostrarPrimerCaracter(cadena);
            }else{
                printf("%c", cadena);
            }
        }

        if(isdigit(cadena)){
            digitos++;
        }

        scanf("%c", &cadena);
        aux++;
    }
    printf("\nCantidad de digitos: %d | Cantidad de vocales: %d", digitos, vocales);

    return 0;
}

void mostrarPrimerCaracter(char Caracter)
{
    if(islower(Caracter)){
        printf("%c", toupper(Caracter));
    }else{
        printf("%c", tolower(Caracter));
    }
}

int esVocal(char Caracter)
{
    if(Caracter=='a' || Caracter=='A' || Caracter=='e' || Caracter=='E' || Caracter=='i' || Caracter=='I' || Caracter=='o' || Caracter=='O' || Caracter=='u' || Caracter=='U'){
        return 1;
    }
    return 0;
}