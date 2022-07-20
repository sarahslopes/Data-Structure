#include <stdio.h>
#include <stdlib.h>

int array_sum(int *arr1, int *arr2, int size1, int size2, int *arr3)
{
    if (size1 != size2)
    {
        return 0;
    }
    int i = 0;
    for (i = 0; i < size1; i++)
    {
        arr3[i] = arr1[i] + arr2[i];
    }
    return 1;
}

int main()
{
    int *arr1, *arr2, *arr3;
    int size1, size2, i;

    printf("Digite o tamanho da array 1: ");
    scanf("%d", &size1);
    arr1 = (int *)malloc(sizeof(int) * size1);

    printf("Digite o tamanho da array 2: ");
    scanf("%d", &size2);
    arr2 = (int *)malloc(sizeof(int) * size2);

    if (size1 != size2)
    {
        exit(0);
    }

    arr3 = (int *)malloc(sizeof(int) * size1);

    for (i = 0; i < size1; i++)
    {
        printf("[ARR1] Escreva o valor para a posicao %d: ", i);
        scanf("%d", &arr1[i]);
    }

    for (i = 0; i < size2; i++)
    {
        printf("[ARR2] Escreva o valor para a posicao %d: ", i);
        scanf("%d", &arr2[i]);
    }

    int response = array_sum(arr1, arr2, size1, size2, arr3);

    if (response != 0)
    {
        for (i = 0; i < size1; i++)
        {
            printf("%d ", arr3[i]);
        }
    }

    exit(response);
}
