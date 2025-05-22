#include <stdio.h>
#define MAX_FILA 10

typedef struct f {
    int qtd;
    int inicio;
    int fim;
    int fila[MAX_FILA];
} Fila;

Fila *cria_fila(){
    Fila *fl = malloc(sizeof(Fila));
    fl->qtd = 0;
    fl->inicio = 0;
    fl->fim = 0;
    return fl;
}

int main(){

    return 0; 
}