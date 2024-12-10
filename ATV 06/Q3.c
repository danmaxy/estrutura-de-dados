#include <stdio.h>
void area(double *c, double *l){
    double a = *c * *l;
    printf("Area:%.2lf\n",a);
    *c = (*c * 2) + (*l * 2);
    printf("Perimetro:%.2lf\n",*c);
}
int main(){
    double c, l;
    printf("Digite o comprimento:");
    scanf("%lf", &c);
    printf("Digite a largura:");
    scanf("%lf", &l);
    area(&c, &l);
}