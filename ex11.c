#include <stdio.h>

int i;

int main() {
    int v1[5], *p;
    p = &v1;

    for(i = 0; i < 5; i++){
        scanf("%d", &p[i]);
    }

     for(i = 0; i < 5; i++){
        if(p[i] % 2 == 0){
            printf("%d", p[i]);
        }

    }

}
