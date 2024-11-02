#include <stdio.h>
int main(){
    int x = 1;
    while(x != 0){
        printf("Escolha uma opcao:\n");
        printf("1- Adicionar\n");
        printf("2- Editar\n");
        printf("3- Pesquisar\n");
        printf("4- Remover\n");
        printf("0- Sair\n");
        printf("Digite a opcao:\n");
        scanf("%d",&x);
    }
    printf("FIm do programa");
}   
