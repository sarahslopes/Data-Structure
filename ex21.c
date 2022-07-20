#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[13], *pt, i = 0;

    pt = array;
    // INICIALIZA EM 0
    for (i = 0; i < 13; i++)
    {
        pt[i] = 0;
    }

    for (i = 0; i < 13; i++)
    {
        pt[i]++;
    }

    for (i = 0; i < 13; i++)
    {
        printf("posicao %d: %d\n", i, array[i]);
    }
}
