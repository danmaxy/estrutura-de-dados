#include <stdio.h>
int main(){
    
    double nota, media, soma = 0;

    for (int i = 0; i < 4; i++){
        printf("Digite sua nota:");
        scanf("%lf",&nota);
        soma = nota + soma;
    }
    media = soma / 4;
    printf("Media: %.2lf \n",media);
    if (media >= 7){
        printf("Aluno aprovado");
    }
    else if (media < 5){
        printf("Aluno reprovado");
    }
    else{
        printf("Aluno em exame");
    }
}
