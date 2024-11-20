#include <stdio.h>
int main(){
    double s;
    double *p;
    printf("Digite o salario:");
    scanf("%lf",&s);
    p = &s;
    *p = *p * 1.10; //10%
    printf("%.2lf",*p);

}