#include <stdio.h>

int i;

int main() {
    int v1[5], *p;
    p = &v1;

    for(i = 0; i < 5; i++){
        scanf("%d", &p[i]);
    }

    dobro(&v1);

}

int dobro(int v1[], int *p){
    for(i = 0; i < 5; i++){
        printf("%d", v1[i] * 2);
    }

}
