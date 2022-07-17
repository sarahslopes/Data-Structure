#include <stdio.h>

int main(){
    int A = 2;
    int *B = &A;
    int **C = &B;
    int ***D = &C;

    calc(A, B, C, D);
}

int calc(int A, int *B, int **C, int ***D){
    A = (*B * 2);
    B = (**C * 3);
    C = (***D * 4);
    printf("Dobro:%d\n", A);
    printf("Triplo:%d\n", B);
    printf("Quadruplo:%d\n", C);
}
