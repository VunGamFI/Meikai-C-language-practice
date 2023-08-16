#include<stdio.h>
int sumup(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++)
        sum += i;
    return sum;
}

int main(void){
    printf("1到10之间所有整数的和为%d。\n", sumup(10));
}