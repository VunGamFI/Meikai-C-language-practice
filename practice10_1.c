#include<stdio.h>
void adjust_point(int *n){
    if(*n < 0)
        *n = 0;
    else if(*n > 100)
        *n = 100;
}

int main(void){
    int input;
    printf("整数：");
    scanf("%d", &input);

    adjust_point(&input);
    printf("整数值为%d。\n", input);
    return 0;
}