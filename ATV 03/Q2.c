#include <stdio.h>
void maior(int n1, int n2){
    if (n1 > n2){
        printf("Maior:%d",n1);
    }else{
        printf("Maior:%d",n2);
    }
}
int main(){
    int n1, n2;
    printf("Digite n1:");
    scanf("%d",&n1);
    printf("Digite n2:");
    scanf("%d",&n2);
    maior (n1, n2);
}