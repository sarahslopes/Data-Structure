#include <stdio.h>
#include <stdio.h>

int main() {
	float *matriz[3][3];
	int i, j;

	for (i=0; i<3; i++) {
		for (j=0; j<3; j++)
			printf("%p\n", &matriz[i][j]);
	}

}
