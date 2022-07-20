#include <stdio.h>
#include <stdlib.h>

int negativos(float *vet, int N)
{
    int i = 0, negativos = 0;
    for (i; i < N; i++)
    {
        if (vet[i] < 0)
        {
            negativos++;
        }
    }
    return negativos;
}

void initialize(float *array, int size)
{
    array = (float *)malloc(sizeof(float) * size);
}

int main()
{
    int size, i = 0, negatives, times = 0;
    float *array;
    printf("Digite o tamanho da array: ");
    scanf("%d", &size);
    initialize(array, size);

    printf("-------------------------------------\n");

    for (i = 0; i < size; i++)
    {
        printf("Escreva o valor para a posicao %d: ", i);
        scanf("%f", &array[i]);
    }

    negatives = negativos(array, size);

    printf("-------------------------------------\n");
    printf("NEGATIVOS: %d\n", negatives);
    printf("-------------------------------------\n");
}
