#include <stdio.h>
#include <stdlib.h>

int get_values(float *nota1, float *nota2)
{
    printf("Nota 1: ");
    scanf("%f", nota1);
    printf("Nota 2: ");
    scanf("%f", nota2);
    return 1;
}

int medias(float nota1, float nota2, float *media_aritmetica, float *media_ponderada)
{
    *media_aritmetica = (nota1 + nota2) / 2;
    *media_ponderada = (nota1 + (nota2 * 2)) / 3;
    return 1;
}

int main()
{
    float nota1, nota2, media_aritmetica, media_ponderada;

    get_values(&nota1, &nota2);
    medias(nota1, nota2, &media_aritmetica, &media_ponderada);

    printf("Media aritmetica: %.2f\n", media_aritmetica);
    printf("Media ponderada: %.2f\n", media_ponderada);

    return 0;
}
