#include<stdio.h>
int main(void){
    int input_1, input_2, input_3;

    printf("第一个整数：");       scanf("%d", &input_1);
    printf("第二个整数：");       scanf("%d", &input_2);
    printf("第三个整数：");       scanf("%d", &input_3);

    int min = input_1;
    if(min > input_2)       min = input_2;
    if(min > input_3)       min = input_3;

    printf("最小值为%d", min);
    return 0;
}