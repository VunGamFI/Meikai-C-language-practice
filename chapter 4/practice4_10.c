#include<stdio.h>
int main(void){
    int input;

    printf("正整数：");
    scanf("%d", &input);

    while(input > 0){
        printf("*\n");
        input--;
    }
    return 0;
}