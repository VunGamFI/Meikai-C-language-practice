#include<stdio.h>
int sqr(int x){
    return x * x;
}

int pow4(int x){
    return sqr(x * x);
}

int main(void){
    int x = 4;

    printf("x的四次幂为%d。\n", pow4(x));
    return 0;
}
