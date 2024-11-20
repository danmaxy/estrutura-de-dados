#include <stdio.h>
int add(char nome, int idade){
    char nomes[30];
    double notas[5];
    int c = 0;
    printf("Nome do Aluno:");
    scanf("%c",&nomes[c]);
    c = c + 1;
    for(int i = 0; i < 4; ++i){
        printf("Nota-%d:",i);
        scanf("%lf",&notas[i]);
    }
}