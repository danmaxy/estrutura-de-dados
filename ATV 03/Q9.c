#include <stdio.h>
void real(float n){
    printf("R$%f",n);
}
int main(){
    float n;
    printf("Digite:");
    scanf("%f",&n);
    real(n);
}