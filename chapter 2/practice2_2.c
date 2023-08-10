#include<stdio.h>
int main(void){
    int input_1, input_2;

    puts("请输入两个整数。");
    printf("整数a：");     scanf("%d", &input_1);
    printf("整数b：");     scanf("%d", &input_2);

    printf("它们的和是%d，积是%d。\n", (input_1 + input_2), (input_1 * input_2));
    return 0;
}