#include<stdio.h>
int main(void){
    int input;

    printf("整数值：");
    scanf("%d", &input);

    for(int i = 1; i <= input; i += 2)
        printf("%d ", i);
    return 0;
}