#include<stdio.h>
int cube(int x){
    return x * x * x;
}

int main(void){
    int x = 9;
    printf("x的立方为%d。", cube(x));
    return 0;
}