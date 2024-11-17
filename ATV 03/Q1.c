#include <stdio.h>
int sucessor(int n){
    n = n + 1;
    return n;
}
int main(){
    int n;
    printf("Digite um numero:");
    scanf("%d",&n);
    printf("%d",(sucessor(n)));

}