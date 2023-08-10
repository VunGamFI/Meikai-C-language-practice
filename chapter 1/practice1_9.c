#include<stdio.h>
int main(void){
    int input_1, input_2, input_3;
    int sum;

    puts("请输入三个整数。");
    printf("整数1：");     scanf("%d", &input_1);
    printf("整数2：");     scanf("%d", &input_2);
    printf("整数3：");     scanf("%d", &input_3);

    sum = input_1 + input_2 + input_3;

    printf("它们的和是%d。\n", sum);
    return 0;
}
