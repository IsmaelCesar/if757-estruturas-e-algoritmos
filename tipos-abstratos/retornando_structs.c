#include <stdio.h>
#include <stdlib.h>

typedef struct my_struct { 
    int valor1; 
    int valor2;
} MyStruct;

MyStruct f1(int valor1, int valor2){
    MyStruct s;
    s.valor1 = valor1;
    s.valor2 = valor2;
    return s;
}

MyStruct *f2(int valor1, int valor2){
    MyStruct *s = malloc(sizeof(MyStruct));
    s->valor1 = valor1;
    s->valor2 = valor2;
    return s;
}

int main(){
    MyStruct another_s = f1(10, 10);
    
    printf("another_s.valor1: %d\n", another_s.valor1);
    printf("another_s.valor2: %d\n", another_s.valor2);

    MyStruct *another_ps = f2(11, 11);

    printf("another_ps->valor1: %d\n", another_ps->valor1);
    printf("another_s->valor2: %d", another_ps->valor2);

    free(another_ps);

    return 0;
}