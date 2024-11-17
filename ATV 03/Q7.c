#include <stdio.h>
double area(double b, double a){
    a = (b * a) / 2;
    return a;
}
int main(){
    double b,a;
    printf("Digite a base:");
    scanf("%lf",&b);
    printf("Digite a altura:");
    scanf("%lf",&a);
    printf("Area:%.2lf",area(b,a));
}
