#include <stdio.h>

int main(){
    char nome[50];

    printf("Digite seu nome: ");
    // scanf("%s", nome);
    // fgets(nome, 49, stdin);
    // gets(nome);
    scanf("%49[^\n]", nome);

    printf("Seu nome eh: %s\n", nome);

    return 0; 
}