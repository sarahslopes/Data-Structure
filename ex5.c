#include <stdio.h>

int main(){
    int a = 12, b = 32 , *p1, *p2;
    p1 = &a;
    p2 = &b;

    printf("Valor das variaveis a e b: %d%d\n", a, b);
    values(&a, &b);


}

int values(int *p1, int *p2){
    if(*p1 > *p2)
        printf("Maior e menor valor respectivamente: %d, %d\n", *p1 , *p2);
    else(
        printf("Maior e menor valor respectivamente: %d, %d\n", *p2 , *p1)
    );
}
