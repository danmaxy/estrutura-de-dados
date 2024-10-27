#include <stdio.h>
int main(){

double salario, imposto = 10, salario_final;
printf("Digite seu salario:");
scanf("%lf",&salario);
imposto = (salario * imposto)/100;
salario_final = salario - imposto;

printf("Salario:%.2lf \n",salario);
printf("Imposto:%.2lf \n",imposto);
printf("Salario Final:%.2lf",salario_final);

}