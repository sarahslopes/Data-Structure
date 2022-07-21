#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int min_max(int *V, int *min, int *max, int size)
{
    int i = 0;

    *min = V[0];
    *max = V[0];

    for (i = 0; i < size; i++)
    {
        if (V[i] > *max)
        {
            *max = V[i];
        }

        if (V[i] < *min)
        {
            *min = V[i];
        }
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    int size, *array, i, min, max;

    printf("Digite o tamanho da array: ");
    scanf("%d", &size);

    array = (int *)malloc(sizeof(int) * (size + 1));
    array[size] = '\0';
    for (i = 0; i < size; i++)
    {
        printf("Escreva o valor para a posicao %d: ", i);
        scanf("%d", &array[i]);
    }

    min_max(array, &min, &max, size);

    printf("VALOR MINIMO: %d\n", min);
    printf("VALOR MAXIMO: %d\n", max);
}
