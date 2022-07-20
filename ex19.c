#include <stdio.h>
#include <stdlib.h>

typedef struct stack
{
    int *values;
    int top;
} Stack;

void initialize(int *array, int size)
{
    array = (int *)malloc(sizeof(int) * size);
}

void initializeStack(int *stack, int size)
{
    stack = (int *)malloc(size * sizeof(int));
}

int indexOf(Stack *stack, int size, int value)
{
    int i = 0;

    for (i; i < size; i++)
    {
        if (stack->values[i] == value)
        {
            return i;
        }
    }
    return -1;
}

void get_largest_number(int *array, int arraySize, int *largest)
{
    int i = 0;
    *largest = array[0];

    for (i; i < arraySize; i++)
    {
        if (array[i] > *largest)
        {
            *largest = array[i];
        }
    }
}

void get_repetition(int *array, int array_size, int value, int *times)
{
    int i;
    for (i = 0; i < array_size; i++)
    {
        if (array[i] == value)
        {
            *times = *times + 1;
        }
    }
}

int main()
{
    int *greatest, *amount, *array, size, i = 0, largest, times = 0;
    printf("Digite o tamanho da array: ");
    scanf("%d", &size);
    initialize(array, size);

    for (i = 0; i < size; i++)
    {
        printf("Escreva o valor para a posicao %d: ", i);
        scanf("%d", &array[i]);
    }

    get_largest_number(array, size, &largest);
    get_repetition(array, size, largest, &times);

    printf("-------------------------------------\n");
    printf("MAIOR NUMERO: %d\n", largest);
    printf("VEZES REPETIDAS: %d\n", times);
    printf("-------------------------------------\n");
}
