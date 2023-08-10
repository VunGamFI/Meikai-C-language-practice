#include<stdio.h>
int main(void){
    int input_1, input_2;

    puts("请输入两个整数。");
    printf("整数x：");     scanf("%d", &input_1);
    printf("整数y：");     scanf("%d", &input_2);

    printf("x的值是y的%d%%。\n", (input_1 * 100 / input_2));
    return 0;
}