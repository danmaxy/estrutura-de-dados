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

// -------------------------- //

#include <stdio.h>
int main() {

int n;
int soma = 0;
int proximo = 0;
printf("Digite:");
scanf("%d",&n);
for (int i = 0; i <= n; i++){
    soma = proximo + i;
    proximo = soma;
}

printf ("Soma %d",soma);

}