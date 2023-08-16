#include<stdio.h>
int min2(int a, int b){
    int min = a;
    if(min > b)
        min = b;
    return min;
}

int main(void){
    int test_1 = 3;
    int test_2 = 9;

    printf("较小的值是%d。\n", min2(test_1, test_2));
    return 0;
}