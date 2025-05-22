#include <stdio.h>

typedef struct item {
    int valor;
    struct item *prox;
} Item;

typedef struct  f{
    int qtd;
    Item *inicio; 
    Item *fim;
} Fila;

Item *cria_item(int v){
    Item *item = malloc(sizeof(Item));
    item->valor = 0;
    item->prox = NULL;
    return item;
}

Fila *cria_fila(){
    Fila *fl = malloc(sizeof(Fila));
    fl->inicio = NULL;
    fl->fim = NULL;
    return fl;
}

void insere(Fila *fl, int v){
    Item *elemento = cria_item(v);
    if(fl->inicio != NULL && fl->fim != NULL){
        fl->inicio = elemento;
        fl->fim = elemento;
    }

    fl->fim->prox = elemento;
    fl->fim = elemento;
    fl->qtd++;
}

void remover(Fila *fl){
    if(fl->inicio != NULL && fl->fim != NULL){
        Item *aux = fl->inicio;
        fl->inicio = fl->inicio->prox;
        free(aux);
    }
}

int main(){

    return 0; 
}