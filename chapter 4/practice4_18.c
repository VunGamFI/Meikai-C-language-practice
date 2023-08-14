#include<stdio.h>
int main(void){
    int input;

    printf("显示多少个*：");
    scanf("%d", &input);

    for(int i = 1; i <= input; i++){
        putchar('*');
        if(i % 5 == 0)
            printf("\n");
    }
    return 0;
}