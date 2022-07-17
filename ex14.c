#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int i = 0;

int main() {
	int v1[MAX], n1 = 6;

	preenche(v1, n1);
	imprimeVetor(v1);
}

void preenche(int *v1, int n1) {
	while(i<MAX) {
		*v1 = n1;
		v1++;
		i++;
	}
}

void imprimeVetor(int *v1) {
	for (i=0; i<MAX; i++)
        printf("%d", *(v1+i));
}
