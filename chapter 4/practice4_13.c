#include<stdio.h>
int main(void){
    int input;
    int sum = 0;

    printf("n的值：");
    scanf("%d", &input);

    for(int i = 1; i <= input; i++)
        sum += i;

    printf("1到%d的和为%d。\n", input, sum);
    return 0;
}