#include <stdio.h>
#include <math.h>
void calculo(double *a, double *b, double *c){
    double xx = (*b * *b) - (4 * *a * *c);
    double x1 = (-(*b) + sqrt(xx)) / (2 * *a);
    double x2 = (-(*b) - sqrt(xx)) / (2 * *a);
    printf("X1:%.2lf\nX2:%.2lf", x1, x2);

}
int main(){
    double a, b, c;
    printf("Digite a:");
    scanf("%lf", &a);
    printf("Digite b:");
    scanf("%lf", &b);
    printf("Digite c:");
    scanf("%lf", &c);
    calculo(&a, &b, &c);
}