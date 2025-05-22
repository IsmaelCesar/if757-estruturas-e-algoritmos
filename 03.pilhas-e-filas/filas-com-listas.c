#include <stdio.h>

typedef struct item {
    int valor;
    struct item *prox;
} Item;

typedef struct  f{
    Item *inicio; 
    Item *fim;
} Fila;



Fila *cria_fila(){
    Fila *fl = malloc(sizeof(Fila));
    fl->inicio = NULL;
    fl->fim = NULL;
    return fl;
}

int main(){

    return 0; 
}