#include<stdio.h>
int main(void){
    FILE *fp;
    char file[128];

    printf("文件名：");
    scanf("%s", file);

    fp = fopen(file, "w");

    printf("\a已消去文件内容。\n");
    fclose(fp);

    return 0;
}