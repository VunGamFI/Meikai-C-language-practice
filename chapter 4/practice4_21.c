#include<stdio.h>
int main(void){
    int input;

    puts("生成一个正方形");
    printf("正方形有几层：");
    scanf("%d", &input);

    for(int i = 0; i < input; i++){
        for(int j = 0; j < input; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}