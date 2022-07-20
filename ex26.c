#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float delta(float a, float b, float c)
{
    float delta;

    delta = b * b - 4 * a * c;

    return delta;
}

int raizes(float A, float B, float C, float *X1, float *X2)
{
    float d;

    d = delta(A, B, C);

    if (d > 0)
    {
        *X1 = ((-B) - sqrt(d)) / (2 * A);
        *X2 = ((-B) + sqrt(d)) / (2 * A);
    }

    if (d == 0)
    {
        *X1 = (-B) / (2 * A);
        *X2 = (-B) / (2 * A);
    }

    if (d < 0)
    {
        return 0;
    }

    return 1;
}

int main(int argc, char const *argv[])
{
    float a, b, c, X1, X2;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    int response = raizes(a, b, c, &X1, &X2);

    if (response)
    {
        printf("AS RAIZES SAO:\n");
        printf("X1 -> %f\n", X1);
        printf("X2 -> %f\n", X2);
        exit(1);
    }

    printf("NAO HA RAIZES DENTRO DOS REAIS\n");
    exit(0);
}
