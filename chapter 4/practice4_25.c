#include<stdio.h>
int main(void){
    int layer;

    puts("让我们来画一个向下的金字塔。");
    printf("金字塔有几层：");
    scanf("%d", &layer);

    for(int i = 1; i <= layer; i++){
        for(int j = 1; j <= layer * 2 - i; j++){
            if(j - i >= 0)
                printf("%d", i % 10);
            else
                putchar(' ');
        }putchar('\n');
    }
    return 0;
}