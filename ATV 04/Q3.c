#include <stdio.h>
double area(double a, double b){
    a = (a * b);
    return a;
}
int main(){
    double a, b;
    double *p1, *p2;
    printf("valor de a:");
    scanf("%lf",&a);
    printf("valor de b:");
    scanf("%lf",&b);

    p1 = &a;
    p2 = &b;

    printf("Area:%.2lf",area(*p1,*p2));

}