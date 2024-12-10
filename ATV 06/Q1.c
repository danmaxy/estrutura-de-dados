#include <stdio.h>
void calculo(double *r){
    double area = 3.14 * (*r * *r);
    printf("Area:%.2lf\n", area);
    double comp = 2 * 3.14 * *r;
    printf("Comprimento:%.2lf", comp);
}
int main(){
    double raio;
    printf("Digite o raio:");
    scanf("%lf",&raio);
    calculo(&raio);
}

