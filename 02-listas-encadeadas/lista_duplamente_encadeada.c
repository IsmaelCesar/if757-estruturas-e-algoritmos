#include <stdio.h>
#include <stdlib.h>

typedef struct item { 
    int valor; 
    struct item *ant;    
    struct item *prox;
} Item;

Item *cria(int valor){
    Item *it = malloc(sizeof(Item));
    it->valor = valor;
    it->prox = NULL;
    it->ant = NULL;
    return it; 
}

Item * insere_iterativa(int v, Item *cabeca){
    Item *it_v = cria(v);

    if(cabeca == NULL){
        return it_v;
    }

    Item *aux = cabeca;
    while (aux->prox != NULL){
        aux = aux->prox;

    }
    
    aux->prox = it_v;
    it_v->ant = aux;

    return cabeca;
}

Item * insere_recursiva(int v, Item *i){
    if(i == NULL){
        return cria(v);
    }
    i->prox = insere_recursiva(v, i->prox);
    i->prox->ant = i;
    return i;
}

void remove_item_iterativo(int v, Item *cabeca){

    // percorrendo
    Item *aux = cabeca;
    while (aux != NULL && aux->valor != v){
        aux = aux->prox;
    }
    
    if(aux != NULL){
        // alterando ponteiros
        Item *ant = aux->ant;
        Item *prox= aux->prox;
        ant->prox = prox;
        prox->ant = ant;
        
        // removendo o elemento
        aux->ant = NULL;
        aux->prox = NULL;
        free(aux);
    }
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

void imprime(Item *cabeca){
    if(cabeca != NULL){
         Item *aux = cabeca;
        while (aux != NULL){
            printf(" %d -> ", aux->valor );
            aux = aux->prox;
            
        }
    }
}


int main(){

    Item *c = NULL;
    c = add_final(c, 13);
    add_final(c, 14);
    imprime(c);
    libera(c);

    return 0;
}