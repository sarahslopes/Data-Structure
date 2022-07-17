#include <stdio.h>

void frac(float num, int *inteiro, float *frac)
{
    *inteiro = (int)num;
    *frac = num - *inteiro;
}

void main()
{
    int inteiro;
    float num = 145.5, fraction;

    frac(num, &inteiro, &fraction);

    printf("Numero: %.2f\n", num);
    printf("Inteiro: %d\n", inteiro);
    printf("fracao: %.2f\n", fraction);
}