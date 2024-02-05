#include <stdio.h>

int main(){
        int num1, num2;
        printf("ingrese dos numeros enteros: \n");
        scanf("%d", &num1);
        scanf("%d", &num2);
        num1=num1+num2;
        num2=num1-num2;
        num1=num1-num2;

        printf("%d\n%d", num1, num2);
}