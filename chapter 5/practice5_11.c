#include<stdio.h>
int main(void){
    int result[6][2];
    int sum_language = 0, sum_math = 0;
    int sum[6];

    for(int i = 0; i < 6; i++)
        for(int j = 0; j < 2; j++){
            printf("第%d位学生的成绩：", (i + 1));
            scanf("%d", &result[i][j]);
        }

    for(int i = 0; i < 6; i++){
        sum_language += result[i][0];
        sum_math += result[i][1];
        sum[i] = result[i][0] + result[i][1];
    }

    printf("语文学科的总分为%d，平均分为%f。\n", sum_language, (double)sum_language / 6);
    printf("数学学科的总分为%d，平均分为%f。\n", sum_math, (double)sum_math / 6);

    for(int i = 0; i < 6; i++){
        printf("第%d为学生的总分为%d,平均分为%f。\n", (i + 1), sum[i], (double)sum[i] / 2);
    }
    return 0;
}