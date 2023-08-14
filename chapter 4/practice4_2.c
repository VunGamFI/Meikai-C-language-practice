#include<stdio.h>
int main(void){
    int input_a, input_b;

    puts("请输入两个整数。");
    printf("整数a：");     scanf("%d", &input_a);
    printf("整数b：");     scanf("%d", &input_b);

    int begin = input_a < input_b ? input_a : input_b;
    int end = input_a > input_b ? input_a : input_b;
    int sum = 0;
    int count = begin;

    do{
        sum = sum + count;
        count = count + 1;
    }while(count <= end);

    printf("大于等于%d小于等于%d的所有整数的和是%d。\n", begin, end, sum);
}