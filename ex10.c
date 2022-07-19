#include <stdio.h>

int i;
int dobro(int v1[]);

int main() {
    int v1[5], *p;
    p = v1;

    for(i = 0; i < 5; i++){
        scanf("%d", &p[i]);
    }

    dobro(p);

}

int dobro(int v1[]){
    for(i = 0; i < 5; i++){
        printf("%d ", v1[i] * 2);
    }

}
