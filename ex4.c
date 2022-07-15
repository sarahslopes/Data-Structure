#include <stdio.h>

int main(){
    int a = 1, b = 2, *p, *p2;
    p = &a;
    p2 = &b;

    printf("Valores de iniciais de a e b: %d, %d\n", a ,b);
    values(&a,&b);
    printf("Valores de finais de a e b: %d, %d\n", a ,b);
}

int values(int *p, int *p2){
    int aux;
    aux = *p;
    *p = *p2;
    *p2 = aux;
}
