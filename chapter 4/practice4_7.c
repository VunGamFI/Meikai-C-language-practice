#include<stdio.h>
int main(void){
    int input, i;

    printf("请输入一个正整数：");
    scanf("%d", &input);

    i = 2;
    while(i < input){
        printf("%d ", i);
        i = i * 2;
    }
    return 0;
}