#include<stdio.h>
int main(void){
    unsigned test = 100;

    int move_l = test << 2;
    int move_r = test >> 2;

    printf("%d向左移两位后的值为%d。\n", test, move_l);
    printf("%d乘于2的4次幂后的值为%d。\n", test, test * 2 * 2);

    printf("%d向右移两位后的值为%d。\n", test, move_r);
    printf("%d除于2的4次幂后的值为%d。\n", test, test / (2 * 2));
    return 0;
}