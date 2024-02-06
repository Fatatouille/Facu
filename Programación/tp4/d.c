#include <stdio.h>

int main(){
    float agua, carbon, distancia;

    printf("Agua: ");
    scanf("%f", &agua);
    printf("Carbon: ");
    scanf("%f", &carbon);
    printf("Distancia: ");
    scanf("%f", &distancia);

    while(distancia>0 && carbon>0 &&agua>0){
        agua-=0.3;
        carbon-=0.2;
        distancia--;
        
        printf("Agua restante: %.2fL\nCarbon restante: %.2fkg\nDistancia restante: %.2fkm", agua, carbon, distancia);        
    }
    
    if(distancia==0){
        printf("\nLlegamos al destino");
    }else{
        printf("\nNo llegamos al destino");
        
        if(carbon==0){
            printf("\nNos quedamos sin carbon");
        }
        if(agua==0){
            printf("\nNos quedamos sin agua");
        }
    }

    return 0;
}