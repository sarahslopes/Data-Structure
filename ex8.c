#include <stdio.h>

int main(){
    int i = 0;
    float v1[3], *p;
    p = &v1;

     for(i; i < 3 ; i++){
        printf("%p\n" , &p[i]);
    }
}

