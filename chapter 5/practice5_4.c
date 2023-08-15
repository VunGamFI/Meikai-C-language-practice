#include<stdio.h>
int main(void){
    int a[5] = {17, 23, 36};
    int b[5];

    for(int i = 0; i < 5; i++)
        b[i] = a[5 - i - 1];

    puts("  a   b");
    puts("---------");
    for(int i = 0; i < 5; i++)
        printf("%4d%4d\n", a[i], b[i]);
    return 0;
}