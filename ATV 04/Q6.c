#include <stdio.h>
int main(){
    int a, b;
    int *p1, *p2;
    printf("Digite a:");
    scanf("%d",&a);
    printf("Digite b:");
    scanf("%d",&b);
    p1 = &a;
    p2 = &b;
    *p2 = *p1;
    printf("%d\n%d",*p1,*p2);

}