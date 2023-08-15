#include<stdio.h>
int main(void){
    int len;

    printf("短边：");
    scanf("%d", &len);

    puts("生成直角在左上方的等腰直角三角形。");
    for(int i = 0; i < len; i++){
        for(int j = 0; j < len - i; j++)
            printf("*");
        putchar('\n');
    }

    puts("\n生成直角在右上方的等腰直角三角形。");
    for(int i = 0; i < len; i++){
        for(int j = 0; j < len; j++){
            if(j - i >= 0)
                putchar('*');
            else
                putchar(' ');
        }putchar('\n');
    }
    return 0;
}