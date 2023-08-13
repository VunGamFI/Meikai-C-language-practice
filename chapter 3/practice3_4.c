#include<stdio.h>
int main(void){
    int input_A, input_B;

    puts("请输入两个整数。");
    printf("整数A：");     scanf("%d", &input_A);
    printf("整数B：");     scanf("%d", &input_B);

    if(input_A > input_B)
        puts("A大于B。");
    else if(input_A == input_B)
        puts("A等于B。");
    else
        puts("A小于B");
    return 0;
}