#include<stdio.h>
int min3(int a, int b, int c){
    int min = a;
    if(min > b)     min = b;
    if(min > c)     min = c;
    return min;
}

int main(void){
    int a = 11;
    int b = 9;
    int c = 7;

    printf("最小值是%d。\n", min3(a, b, c));
    return 0;
}