#include <stdio.h>
#include <stdlib.h>

typedef struct item { 
    int valor; 
    struct item *prox;
} Item;

Item *cria(int valor){
    Item *it = malloc(sizeof(Item));
    it->valor = valor;
    it->prox = NULL;
    return it; 
}

Item * insere(int v, Item *cabeca){
    Item *it_v = cria(v);

    if(cabeca == NULL){
        return it_v;
    }

    Item *aux = cabeca;
    while (aux->prox != NULL){
        aux = aux->prox;
    }
    
    aux->prox = it_v;

    return cabeca;
}

void libera(Item *cabeca){
    if(cabeca != NULL){
         Item *aux = cabeca;
        while (aux->prox != NULL){
            Item *temp = aux;
            aux = aux->prox;
            free(temp);
        }
    }
}



int main(){


    return 0;
}