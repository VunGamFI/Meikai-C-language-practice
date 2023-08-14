#include<stdio.h>
int main(void){
    int input;

    printf("整数值：");
    scanf("%d", &input);

    int count = 0;
    for(int i = 1; i <= input; i++)
        if(input % i == 0) {
            printf("%d\n", i);
            count++;
        }
    printf("约数有%d个。\n", count);
    return 0;
}