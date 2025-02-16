#include <stdio.h>
int main(){
    
    int velo, mult = 10;
    printf("Digite a velocidade:");
    scanf("%d",&velo);
    if (velo <= 80){
        printf("ta suave");
    }

    else{
        mult=(velo - 80) * 10;
        printf("Multa: %d",mult);
    }

}