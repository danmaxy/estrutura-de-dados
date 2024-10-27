#include <stdio.h>

int main() {

float raio, area, pi, comprimento;
pi = 3.14;
printf ("Raio:");
scanf ("%f",&raio);

area = pi * (raio * raio);
comprimento = 2 * pi * raio;

printf ("area: %f\n",area);
printf ("comprimento: %f",comprimento);


}