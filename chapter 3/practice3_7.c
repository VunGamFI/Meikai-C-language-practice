#include<stdio.h>
int main(void){
    int input_1, input_2, input_3, input_4;

    printf("第一个整数：");       scanf("%d", &input_1);
    printf("第二个整数：");       scanf("%d", &input_2);
    printf("第三个整数：");       scanf("%d", &input_3);
    printf("第四个整数：");       scanf("%d", &input_4);

    int max = input_1;
    if(max < input_2)       max = input_2;
    if(max < input_3)       max = input_3;
    if(max < input_4)       max = input_4;

    printf("最大值为%d。", max);
    return 0;
}