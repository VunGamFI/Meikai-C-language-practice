#include<stdio.h>
void change(int x, int y){
    if(x < y){
            int temp = x;
            x = y;
            y = temp;
    }
}

int gcd(int x, int y){
    while(x % y != 0){
        change(x, y);
        int temp = y;
        y = x % y;
        x = temp;
    }
    return y;
}

int main(void){
    int x, y;
    printf("x：");   scanf("%d", &x);
    printf("y：");   scanf("%d", &y);

    printf("最大公约数为%d。\n", gcd(x, y));
    return 0;
}