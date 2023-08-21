#include<stdio.h>
int factorial(int n){
    if(n == 0){
        n = 1;
    }else{
        for(int i = n - 1; i > 0; i--)
            n *= i;
    }
    return n;
}

int main(void){
    int num;

    printf("请输入一个整数：");
    scanf("%d", &num);

    printf("该整数的阶乘为%d。\n", factorial(num));
    return 0;
}