#include <stdio.h>

int main(){
    int matriz[50][50],n, cont=0;

    scanf("%d", &n);

    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cont++;
            printf("%d", cont);
        }
        printf("\n");
    }

    return 0;
}