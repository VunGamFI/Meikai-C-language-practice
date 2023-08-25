#include<stdio.h>

int main(void){
    int ch;
    int column = 0;
    FILE *fp;
    char fname[FILENAME_MAX];

    printf("文件名：");
    scanf("%s", fname);

    if((fp = fopen(fname, "r")) == NULL)
        printf("\a文件打开失败。\n");
    else{
        while((ch = fgetc(fp)) != EOF)
            if(ch == '\n')
                column++;
        fclose(fp);
        printf("该文件的行数是%d行。\n", column + 1);
    }
    return 0;
}