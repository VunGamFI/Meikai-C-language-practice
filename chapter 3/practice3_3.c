#include<stdio.h>
int main(void){
    int input;

    printf("请输入一个整数：");
    scanf("%d", &input);

    if(input < 0)
        input = -input;

    printf("绝对值是%d。", input);
    return 0;
}