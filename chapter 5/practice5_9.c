#include<stdio.h>
#define NUMBER 80
int main(void){
    int num;
    int tensu[NUMBER];
    int bunpu[11] = {0};

    printf("请输入学生人数：");
    do{
        scanf("%d", &num);
        if(num < 1 || num > NUMBER)
            printf("\a请输入1～%d的数：", NUMBER);
    }while(num < 1 || num > NUMBER);

    for(int i = 0; i < num; i++){
        printf("%2d号：", i + 1);
        do{
            scanf("%d", &tensu[i]);
            if(tensu[i] < 0 || tensu[i] > 100)
                printf("\a请输入1～100的数：");
        }while(tensu[i] < 0 || tensu[i] > 100);
        bunpu[tensu[i] / 10]++;
    }

    int max = bunpu[0];
    for(int i = 1; i < 11; i++)
        if(max < bunpu[i])
            max = bunpu[i];

    puts("\n---分布图---");
    for(int i = max; i > 0; i--){
        for(int j = 0; j < 11; j++){
            if(i - bunpu[j] > 0)
                printf("    ");
            else
                printf("   *");
        }
        putchar('\n');
    }

    puts("----------------------------------------------");
    for(int i = 0; i < 11; i++)
        printf("%4d", i * 10);
    return 0;
}