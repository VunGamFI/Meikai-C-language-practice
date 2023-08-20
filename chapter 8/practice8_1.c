#include<stdio.h>
#define diff(x, y) (x - y)
int main(void){
    int input_1;
    double input_2;
    printf("整数：");
    scanf("%d", &input_1);
    printf("实数：");
    scanf("%lf", &input_2);
    printf("两数之差是%f", diff(input_1, input_2));
    return 0;
}
