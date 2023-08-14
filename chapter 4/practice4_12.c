#include<stdio.h>
int main(void){
    int input;
    int count = 0;

    do {
        printf("请输入一个正整数：");
        scanf("%d", &input);
    }while(input <= 0);

    int copy = input;

    while(input > 0){
        count++;
        input /= 10;
    }

    printf("%d的位数是%d。\n", copy, count);
    return 0;
}