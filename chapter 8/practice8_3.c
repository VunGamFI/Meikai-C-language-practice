#include<stdio.h>
#define swap(type, a, b) {type temp = a; a = b; b = temp;}
int main(void){
    int input_1, input_2;

    printf("第一个整数：");       scanf("%d", &input_1);
    printf("第二个整数：");       scanf("%d", &input_2);

    swap(int, input_1, input_2);
    printf("交换后的整数为%d，%d", input_1, input_2);
    return 0;
}