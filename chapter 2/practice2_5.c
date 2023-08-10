#include<stdio.h>
int main(void){
    int input_1, input_2;

    puts("请输入两个整数。");
    printf("整数a：");     scanf("%d", &input_1);
    printf("整数b：");     scanf("%d", &input_2);

    printf("a是b的%f%%。\n", (double)input_1 / input_2 * 100);
    return 0;
}