#include <stdio.h>

int main(){
    int a = 2, b = 15 , *p, *p1;
    sum(&a, &b);

}

int sum(int *p, int *p1){
    int sum1;

    sum1 = (2 * (*p)) + (2 * (*p1));
    printf("%d", sum1);
}
