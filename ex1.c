#include <stdio.h>

int main(){
    int v1, *p;
    char v2, *p2;
    float v3, *p3;

    p = &v1;
    p2 = &v2;
    p3 = &v3;

    *p = 5;
    *p2 = 'c';
    *p3 =  10;

    printf("Valor inicial de v1: %d\n", v1);
    printf("Valor inicial de v2: %c\n", v2);
    printf("Valor inicial de v3: %2.f\n", v3);


    *p = 15;
    *p2 = 'd';
    *p3 =  20;

    printf("\n");
    printf("Valor final de v1: %d\n", v1);
    printf("Valor final de v2: %c\n", v2);
    printf("Valor final de v3: %2.f\n", v3);


}
