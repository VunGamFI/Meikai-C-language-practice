#include<stdio.h>
int main(void){
    int input_A, input_B, input_C;

    puts("请输入两个整数。");
    printf("整数A：");     scanf("%d", &input_A);
    printf("整数B：");     scanf("%d", &input_B);

    if((input_A > input_B && input_A - input_B <= 10) || (input_A < input_B && input_B - input_A <= 10))
        puts("它们的差小于等于10。");
    else
        puts("它们的差大于等于11。");
    return 0;
}