#include<stdio.h>
#define NUMBER 100
int main(void){
    int num;
    int number[NUMBER];

    do{
        printf("数据个数：");
        scanf("%d", &num);
    }while(num < 1 || num > NUMBER);

    for(int i = 0; i < num; i++){
        printf("%d号：", (i + 1));
        scanf("%d", &number[i]);
    }

    printf("{");
    for(int i = 0; i < num; i++){
        if(i == num - 1)
            printf("%d}\n", number[i]);
        else
            printf("%d, ", number[i]);
    }
    return 0;
}