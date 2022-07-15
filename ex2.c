#include <stdio.h>

/*Escreva um programa que contenha duas variaveis inteiras. Compare seus enderecos e
exiba o maior endereco.*/

int main(){
    int v1, v2, *p, *p2;

    if (&p > &p2)
        printf("O maior endereco de memoria é: %p\n", &p);
    else(
        printf("O maior endereco de memoria é: %p\n", &p2)
    );
}
