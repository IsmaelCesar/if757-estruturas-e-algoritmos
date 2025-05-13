#include <stdio.h>
#include <stdlib.h>

typedef struct vet_3d { 
    float x, y, z;
} Vet3d;

Vet3d *cria(float x, float y, float z){
    Vet3d *v = malloc(sizeof(Vet3d));
    v->x = x;
    v->y = y;
    v->z = z;
    return v;
}

void libera(Vet3d *v){
    free(v);
}

Vet3d *soma(Vet3d *v1, Vet3d *v2){
    Vet3d *resultado = cria(0,0,0);
    resultado->x = v1->x + v2->x;
    resultado->y = v1->y + v2->y;
    resultado->z = v1->z + v2->z;
    return resultado;
}

float prodint(Vet3d *v1, Vet3d *v2){
    return v1->x*v2->x + v1->y*v2->y + v1->z*v2->z;
}

int main(){


    return 0;
}