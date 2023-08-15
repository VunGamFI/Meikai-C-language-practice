#include<stdio.h>
int main(void){
    int layer;

    puts("让我们来画一个金字塔。");
    printf("金字塔有几层：");
    scanf("%d", &layer);

    for(int i = 0; i < layer; i++){
        for(int j = 0; j < layer + i; j++){
            if(layer - i - j - 1 > 0)
                putchar(' ');
            else
                putchar('*');
        }putchar('\n');
    }
    return 0;
}