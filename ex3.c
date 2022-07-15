#include <stdio.h>

int main(){
int v1, v2;

    printf("Insira dois valores inteiros: \n");
    scanf ("%d %d", &v1, &v2);


    if (&v1 > & v2)
        printf("O maior endereco de memoria é: %p\n", &v1);
    else(
        printf("O maior endereco de memoria é: %p\n", &v2)
    );
}
