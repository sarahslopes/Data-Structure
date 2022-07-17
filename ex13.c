#include <stdio.h>
#include <string.h>

int i = 0;

int main(){
    char str1 [5] = "sarah", *p , str2 [5] = "sarar", *p2;

    p = &str1;
    p2 = &str2;

    compara(&str1, &str2);
}

void compara(char *p, char *p2){
    for(i = 0 ; i < 1; i++){
        printf("%s\n", &p[i]);
    }
}
