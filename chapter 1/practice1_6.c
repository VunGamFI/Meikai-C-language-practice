#include<stdio.h>
int main(void){
    int input;
    printf("请输入一个整数：");
    scanf("%d", &input);

    printf("该整数减去6的结果是%d。\n", input - 6);
    return 0;
}