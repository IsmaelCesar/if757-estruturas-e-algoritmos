#include <stdio.h>
#include <stdlib.h>

typedef struct item { 
    int valor1; 
    struct item *prox;
} Item;

int main(){

    Item *it = malloc(sizeof(Item));

    it->valor1 = 10; 
    it->prox = NULL;

    printf("Valor primeiro item: %d\n", it->valor1);
    printf("Valor proximo item: %p", it->prox);

    return 0;
}