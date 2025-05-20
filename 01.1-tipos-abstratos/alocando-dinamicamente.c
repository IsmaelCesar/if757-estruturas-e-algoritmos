#include <stdio.h>
#include <stdlib.h>

typedef struct my_struct { 
    int valor1; 
    int valor2;
} MyStruct;

int main(){
    MyStruct *s1 = malloc(50*sizeof(MyStruct));

    s1[15].valor1 = 0;
    s1[15].valor2 = 0;

    printf("s1->valor1: %d\n", s1[15].valor1);
    printf("s1->valor2: %d", s1[15].valor2);

    for(int i = 0; i < 50; i++){
        free(s1+i);
    }
    return 0;
}