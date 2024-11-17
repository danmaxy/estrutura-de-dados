#include <stdio.h>
double media (double m){
    m = m / 3;
    return m;
}
int main(){
    double nota, soma;
    for(int i = 1; i < 4; ++i){
        printf("Digite N%d:",i);
        scanf("%lf",&nota);
        soma = nota + soma;
    }
    printf("Media:%.2lf",media(soma));
}