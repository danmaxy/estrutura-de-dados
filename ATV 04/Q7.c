#include <stdio.h>
int main(){
    int n1, n2, a;
    int *p1, *p2;
    printf("Digite n1:");
    scanf("%d",&n1);
    printf("Digite n2:");
    scanf("%d",&n2);
    p1 = &n1;
    p2 = &n2;
    a = *p1;
    *p1 = *p2;
    *p2 = a;
    printf("%d\n",*p1);
    printf("%d",*p2);
}