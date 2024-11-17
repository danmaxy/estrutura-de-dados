#include <stdio.h>
double area(double l){
    l = l * l;
    return l;
}
int main(){
    double l;
    printf("Digite o lado:");
    scanf("%lf",&l);
    printf("Area:%.2lf",area(l));
}
