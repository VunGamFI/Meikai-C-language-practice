#include<stdio.h>
#define NUMBER 5
typedef struct{
    char name[100];
    double height;
    double weight;
}Human;

int main(void){
    Human std[128];
    FILE *fp;

    if((fp = fopen("test_1.dat", "w")) == NULL)
        printf("\a文件打开失败。\n");
    else{
        for(int i = 0; i < NUMBER; i++){
            printf("第%d个人的数据\n", i + 1);
            printf("姓名：");      scanf("%s", std[i].name);
            printf("身高：");      scanf("%lf", &std[i].height);
            printf("体重：");      scanf("%lf", &std[i].weight);
        }
        for(int i = 0; i < NUMBER; i++){
            fprintf(fp, "第%d个人的数据\n姓名：%s\n身高：%.1lf\n体重:%.1lf\n", i + 1, std[i].name, std[i].height, std[i].weight);
        }
        fclose(fp);
    }
    return 0;
}