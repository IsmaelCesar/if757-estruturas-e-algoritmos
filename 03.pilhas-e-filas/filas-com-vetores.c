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

void insere(Fila *fl, int valor){
    if(fl->qtd < MAX_FILA){
        fl->fila[fl->fim] = valor;
        fl->fim = (fl->fim + 1) % MAX_FILA;
        fl->qtd++;
    }
    else{
        printf("Fila cheia.");
    }
}

void remove(Fila *fl){
    if(fl->qtd > 0){
        fl->inicio = (fl->inicio + 1) % MAX_FILA;
        fl->qtd--;
    }
    else{
        printf("Fila vazia.");
    }
}


int main(){

    return 0; 
}