#include <stdio.h>
int media(double m){
    if(m >= 7){
        return 0;
    }else{
        return 1;
    }
}
int main(){
    double m;
    printf("Digite sua media:");
    scanf("%lf",&m);
    printf("%d",media(m));
}