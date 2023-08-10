#include<stdio.h>
int main(void){
    double input;

    printf("请输入一个实数：");
    scanf("%lf", &input);

    printf("你输入的是%f", input);
    return 0;
}