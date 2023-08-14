#include<stdio.h>
int main(void){
    int no;

    printf("正整数：");
    scanf("%d", &no);

    int determin = no;

    while(no-- > 0)
        putchar('*');
    if(determin >= 1)
        putchar('\n');
    return 0;
}