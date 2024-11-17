#include <stdio.h>
double imc(double m, double a){
    m = m / (a * a);
    return m;
}
int main(){
    double m,a;
    printf("Digite sua massa:");
    scanf("%lf",&m);
    printf("Digite sua altura:");
    scanf("%lf",&a);
    printf("IMC:%lf",imc(m,a));

}