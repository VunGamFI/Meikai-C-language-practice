#include<stdio.h>
#define max(x, y) ((x) > (y) ? (x) : (y))
int main(void){
    int a, b, c, d;
    int test_1, test_2;
    printf("整数a：");     scanf("%d", &a);
    printf("整数b：");     scanf("%d", &b);
    printf("整数c：");     scanf("%d", &c);
    printf("整数d：");     scanf("%d", &d);

    test_1 = max(max(a, b), max(c, d));
    test_2 = max(max(max(a, b), c), d);

    printf("最大值为%d\n", test_1);
    printf("最大值为%d\n", test_2);
    return 0;
}