#include <stdio.h>
#include <math.h>

int calculo(double *a, double *b, double *c, double *x1, double *x2) {
    double xx = (*b * *b) - (4 * *a * *c);

    if (xx < 0) {
        return 0;
    } else if (xx == 0) {
        *x1 = -(*b) / (2 * *a);
        return 1; 
    } else {
        *x1 = (-(*b) + sqrt(xx)) / (2 * *a);
        *x2 = (-(*b) - sqrt(xx)) / (2 * *a);
        return 2; 
    }
}

int main() {
    double a, b, c;
    printf("Digite a: ");
    scanf("%lf", &a);
    printf("Digite b: ");
    scanf("%lf", &b);
    printf("Digite c: ");
    scanf("%lf", &c);

    double x1, x2;
    int num_raizes = calculo(&a, &b, &c, &x1, &x2);

    if (num_raizes == 0) {
        printf("A equação não possui raízes reais.\n");
    } else if (num_raizes == 1) {
        printf("A equação possui uma raiz: X1: %.2lf\n", x1);
    } else {
        printf("A equação possui duas raízes: X1: %.2lf, X2: %.2lf\n", x1, x2);
    }

    return 0;
}
