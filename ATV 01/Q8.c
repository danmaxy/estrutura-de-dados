#include <stdio.h>
int main(){

double distancia, velo;
printf("Digite a distancia:");
scanf("%lf",&distancia);
printf("Digite a velocidade:");
scanf("%lf",&velo);
velo = distancia / velo;
printf("Tempo de viagem: %2.lf Hrs",velo);

}