#include <stdio.h>
int main(){
    
    int velo, multa = 10;
    printf("Digite a velocidade:");
    scanf("%d",&velo);
    if (velo <= 80){
        printf("ta suave");
    }

    else{
        multa=(velo - 80) * 10;
        printf("Multa: %d",multa);
    }

}