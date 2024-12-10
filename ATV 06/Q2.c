#include <stdio.h>
void x (int *a, int *b){
    *a = *a - 1;
    *b = *b + 1;
    printf("%d\n", *a);
    printf("%d", *b);

}
int main(){
    int a, b;
    printf("Digite o valor de a:");
    scanf("%d",&a);
    printf("Digite o valor de b:");
    scanf("%d",&b);
    x(&a, &b);
}

