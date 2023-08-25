#include<stdio.h>
int main(void){
    FILE *fp;
    double test[10];

    for(int i = 0; i < 10; i++){
        printf("test[%d] = ", i);
        scanf("%lf", &test[i]);
    }

    if((fp = fopen("test.txt", "wb")) == NULL)
        printf("\a文件打开失败。\n");
    else{
        fwrite(test, sizeof(double), 10, fp);
        fclose(fp);
    }

    if((fp = fopen("test.txt", "rb")) == NULL)
        printf("\a文件打开失败。\n");
    else{
        fread(test, sizeof(double), 10, fp);
        for(int i = 0; i < 10; i++)
            printf("test[%d] = %23.21lf\n", i, test[i]);
        fclose(fp);
    }
    return 0;
}