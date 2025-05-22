#include <stdio.h>
#define MAX 5

typedef struct pilha {
    int topo;
    int p[MAX];
} Pilha;

Pilha *cria_pilha(){
    Pilha *p = malloc(sizeof(Pilha));
    p->topo = -1;
    return p;
}

void push(Pilha *pl, int v){
    if(pl->topo <= MAX-1){
        pl->topo++;
        pl->p[pl->topo] = v;
    }
    else{
        printf("Pilha cheia.");
    }
}

void pop(Pilha *pl){
    if(pl->topo >= 0){
        pl->topo--;
    }
    else{
        printf("Pilha vazia.");
    }
}

int main(){


    return 0;
}