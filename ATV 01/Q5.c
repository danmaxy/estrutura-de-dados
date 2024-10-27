#include <stdio.h>
int main(){

double c, f, k;
printf("Celsius:");
scanf("%lf",&c);
f = (c * 1.8) + 32;
k =  c + 273.15;
printf("Celcius:%lf ,Fairaiting:%lf ,Kelvin:%lf", c ,f ,k);

}