#include <stdio.h>
int main(){
    double m;
    double *p;
    printf("Digite a media:");
    scanf("%lf",&m);
    p = &m;
    *p = *p + 1;
    printf("%.2lf",*p);

}