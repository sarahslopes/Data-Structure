#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int i = 0;

int main() {
	int v1[MAX] = {1, 3, 5, 7, 8}, *p;
	p = &v1;
	imprime(&v1);
}

void imprime(int *p) {
	for (i=0; i < MAX; i++)
        printf("%d ", *(p+i));
}
