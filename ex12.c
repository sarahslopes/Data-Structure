#include <stdio.h>
#include <stdlib.h>

int i = 0;

int verifica(int *pa, int *pb, int *pc){

    for(i = 0; i < 3; i++){

        if (*pa > *pc) {
            int tmp = *pc;
            *pc = *pa;
            *pa = tmp;
        }

        if (*pa > *pb) {
            int tmp = *pb;
            *pb = *pa;
            *pa = tmp;
        }

        if (*pb > *pc) {
            int tmp = *pc;
            *pc = *pb;
            *pb = tmp;
        }

        if(*pa == *pb == *pc)
            return 1;
        else
            return 0;


    }

}

int main(){
    int a, b, c, *pa, *pb, *pc;
    pa = &a;
    pb = &b;
    pc = &c;

    scanf("%d%d%d", &a, &b, &c);

    int response = verifica(&a, &b, &c);

    printf("%d %d %d", *pa, *pb, *pc);
    exit(response);
}