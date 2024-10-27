#include <stdio.h>
int main() {

double altura, largura, area, perimetro;

printf("altura:");
scanf("%lf", &altura);
printf("largura:");
scanf("%lf", &largura);

area = altura * largura;
perimetro = ( 2 * altura) + (2 * largura);

printf ("Area: %2.lf \n", area);
printf ("perimetro: %2.lf", perimetro);


}