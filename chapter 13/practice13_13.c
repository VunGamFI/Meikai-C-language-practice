#include<stdio.h>
int main(void){
    int ch;
    FILE *sfp;
    FILE *dfp;
    char sname[FILENAME_MAX];
    char dname[FILENAME_MAX];

    printf("打开原文件：");       scanf("%s", sname);
    printf("打开目标文件：");      scanf("%s", dname);

    if((sfp = fopen(sname, "rb")) == NULL)
        printf("\a原文件打开失败。\n");
    else{
        if((dfp = fopen(dname, "wb")) == NULL)
            printf("\a目标文件打开失败。\n");
        else{
            while(fread(&ch, sizeof(int), 1, sfp) > 0)
                fwrite(&ch,sizeof(int), 1, dfp);
            fclose(dfp);
        }
        fclose(sfp);
    }
    return 0;
}