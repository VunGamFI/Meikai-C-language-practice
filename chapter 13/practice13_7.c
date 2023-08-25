#include<stdio.h>

int main(void){
    int ch;
    int count = 0;
    FILE *fp;
    char fname[FILENAME_MAX];

    printf("文件名：");
    scanf("%s", fname);

    if((fp = fopen(fname, "r")) == NULL)
        printf("\a文件打开失败。\n");
    else{
        while((ch = fgetc(fp)) != EOF)
            count++;
        fclose(fp);
        printf("文件字符数为%d。\n", count);
    }
    return 0;
}