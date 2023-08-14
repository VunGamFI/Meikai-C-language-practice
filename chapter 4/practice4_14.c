#include<stdio.h>
int main(void){
    int input;

    printf("请输入一个整数：");
    scanf("%d", &input);

    for(int i = 1, j = 1; i <= input; i++){
        printf("%d", j);
        j++;
        if(j == 10)
            j = 0;
    }
    printf("\n");
    return 0;
}