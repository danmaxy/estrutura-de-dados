#include <stdio.h>
int main(){
    
    int velo;
    printf("Digite a velocidade:");
    scanf("%d",&velo);
    if (velo <= 80){
        printf("Verde");
    }
    else{
        printf("Vermelho");
    }

}