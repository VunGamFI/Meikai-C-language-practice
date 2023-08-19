#include<stdio.h>
unsigned rrotate(unsigned x, int n){
    x >>= n;
    return x;
}

unsigned lrotate(unsigned x, int n){
    x <<= n;
    return x;
}

int main(void){
    unsigned test = 100;
    int n = 3;

    printf("%d向右移%d位后的值为%d。\n", test, n, rrotate(test, n));
    printf("%d向左移%d位后的值为%d。\n", test, n, lrotate(test, n));
    return 0;
}