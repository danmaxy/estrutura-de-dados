#include <stdio.h>

int main() {
int n;
    
printf("Digite um numero: ");
scanf("%d", &n);

printf("Numeros de 1 a %d:\n", n);
for (int i = 1; i <= n; i++) {
    printf("%d\n", i);
}

}
