#include<stdio.h>
int main(void){
    int no, retry;

    do{
        printf("请输入一个整数：");
        scanf("%d", &no);

        if(no == 0)
            puts("该整数为0。");
        else if(no > 0)
            puts("该整数为正数。");
        else
            puts("该整数为负数。");

        printf("是否继续？<Yes --- 1 / No --- 0>：");
        scanf("%d", &retry);
    }while(retry == 0);
    return 0;
}
