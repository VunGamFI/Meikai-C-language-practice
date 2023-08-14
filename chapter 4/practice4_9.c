#include<stdio.h>
int main(void){
    int input;

    printf("正整数：");
    scanf("%d", &input);

    int i = 0;
    while(++i <= input){
        if(i % 2)
            putchar('+');
        else
            putchar('-');
    }
    if(input > 0)
        putchar('\n');
    return 0;
}