#include <stdio.h>

int main(){
    int a = 10, b = 20, *p, *p2;
    p = &a;
    p2 = &b;

    printf("Valor inicial de a: %d\n", *p);
    printf("Valor inicial de b: %d\n", *p2);

    sum(&a, &b);

    printf("Valor fnal de a: %d\n", *p);

}

int sum(int *p, int *p2){
    int sum1;

    sum1 = *p + *p2;
    *p = sum1;
}
