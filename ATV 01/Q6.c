#include <stdio.h>
int main(){

double salario, imposto = 10;
printf("Digite seu salario:");
scanf("%lf",&salario);
imposto = (salario * imposto)/100;
printf("Salario:%2.lf \n",salario);
printf("Imposto:%2.lf",imposto);

}