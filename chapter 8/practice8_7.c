#include<stdio.h>
int factorial(int n){
    if(n > 0)
        return n * factorial(n - 1);
    else
        return 1;
}

int combination(int n, int r){
    if(r == 0 || r == n)
        return 1;
    else if(r == 1)
        return n;
    else{
        return (factorial(n) / (factorial(r) * (factorial(n - r))));
    }
}

int main(void){
    int num, choice;

    printf("请输入一个整数：");
    scanf("%d", &num);
    printf("取出整数个数：");
    scanf("%d", &choice);

    printf("该整数的排列为%d。\n", combination(num, choice));
    return 0;
}