#include<stdio.h>
int main(void){
    int input_A, input_B;
    puts("请输入两个整数。");
    printf("整数A：");     scanf("%d", &input_A);
    printf("整数B：");     scanf("%d", &input_B);

    if(input_A % input_B)
        puts("B不是A的约数。");
    else
        puts("B是A的约数。");
    return 0;
}