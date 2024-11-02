#include <stdio.h>
int main(){
    int n, soma = 0;
    printf("Digite o numero:");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        soma = soma + i;
    }
    printf("%d",soma);
}

