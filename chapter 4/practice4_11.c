#include<stdio.h>
int main(void){
    int input;

    do {
        printf("请输入一个正整数：");
        scanf("%d", &input);
    }while(input <= 0);

    printf("%d逆向显示的结果是", input);

    while(input > 0){
        printf("%d", input % 10);
        input /= 10;
    }
    puts("。");
    return 0;
}