#include<stdio.h>
int main(void){
    FILE *fp;
    char file[128];

    printf("文件名：");
    scanf("%s", file);

    fp = fopen(file, "r");

    if(fp == NULL)
        printf("\a该文件不存在。\n");
    else{
        printf("\a该文件存在。\n");
        fclose(fp);
    }
    return 0;
}