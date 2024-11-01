#include <stdio.h>
int main(){
    
    double salario, imposto, inss;
    printf("Digite seu salario:");
    scanf("%lf", &salario);
    
    if (salario > 2000){
        imposto = (salario * 15)/100;
        inss = (salario * 10)/100;
        printf("Salario: %.2lf \n",salario);
        printf("Imposto: %.2lf \n",imposto);
        printf("INSS: %.2lf",inss);
    }
    else{
        imposto = (salario * 0)/100;
        inss = (salario * 7)/100;
        printf("Salario: %.2lf \n",salario);
        printf("Imposto: %.2lf \n",imposto);
        printf("INSS: %.2lf",inss);

    }

}