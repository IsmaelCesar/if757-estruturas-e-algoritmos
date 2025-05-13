#include <stdio.h>
#include <stdlib.h>

typedef struct my_struct { 
    int valor1; 
    int valor2;
} MyStruct;

int main(){
    MyStruct *m1 = malloc(sizeof(MyStruct));

    m1->valor1 = 0;
    m1->valor2 = 0;

    printf("Valor 1: %d\n", m1->valor1);
    printf("Valor 2: %d\n", m1->valor2);
    return 0;
}