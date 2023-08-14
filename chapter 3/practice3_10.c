#include<stdio.h>
int main(void){
    int input_A, input_B, input_C;

    puts("请输入三个整数。");
    printf("整数A：");     scanf("%d", &input_A);
    printf("整数B：");     scanf("%d", &input_B);
    printf("整数C：");     scanf("%d", &input_C);

    if(input_A == input_B && input_A == input_C)
        puts("三个值都相等。");
    else if(input_A != input_B && input_A != input_C)
        puts("三个值都不相等。");
    else
        puts("有两个值相等。");
    return 0;
}