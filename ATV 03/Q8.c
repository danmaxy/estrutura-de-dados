#include <stdio.h>
void numero(n){
    if(n % 2 == 0){
        printf("Par");
    }else{
        printf("impar");
    }
}
int main(){
    int n;
    printf("Digite um numero:");
    scanf("%d",&n);
    numero (n);
}