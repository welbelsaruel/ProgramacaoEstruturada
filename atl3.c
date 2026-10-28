#include "stdlib.h"
#include "stdio.h"

int main(){
    int numero;
    int maior=0;
    int sum=0;

    int *ns = malloc(numero * sizeof(int));

    for(int i=0;i<(sizeof(ns)/ns[0]);i++){
        scanf("%d", &ns[i]);
    }

    for(int i=0;i<(sizeof(ns)/ns[0]);i++){
        if(maior < ns[i])maior = ns[i];
        sum+=ns[i];
    }

    printf("O maior valor eh: %d\nA media dos valores eh: %lf", maior, float(sum)/(sizeof(ns)/ns[0]));
}