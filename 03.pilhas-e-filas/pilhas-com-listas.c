#include <stdio.h>
#include <stdlib.h>

typedef struct item { 
    int valor; 
    struct item *prox; 
} Item;

typedef struct pilha{ 
    Item *topo;
} Pilha;

Item *cria_item(int valor){
    Item *v = malloc(sizeof(Item));
    v->valor = valor;
    v->prox = NULL;
    return v;
}

void push(Pilha *p, int valor){
    Item *v = cria_item(valor);
    v->prox = p->topo;
    p->topo = v;
}

void pop(Pilha *p){
    Item *v = p->topo;
    p->topo = p->topo->prox;
    free(v);
}

void imprime_pilha(Pilha *p){
    Item *aux  = p->topo;
    while(aux != NULL){
        printf("%d\n", aux->valor);
        printf("|");
        aux = aux->prox;
    }
}

void libera_pilha(Pilha *p){
    while(p->topo != NULL){
        pop(p);
    }
}

int main(){

    return 0;
}