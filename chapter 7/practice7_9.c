#include<math.h>
#include<stdio.h>
int main(void){
    double area, length;

    printf("正方形的面积：");
    scanf("%lf", &area);

    length = sqrt(area);

    printf("正方形的边长为%f。\n", length);
    return 0;
}