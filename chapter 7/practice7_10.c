#include<stdio.h>
int main(void){
    int i;
    float j;
    float x;
    for(i = 0, j = 0.0; i <= 100; i++, j += 0.01){
        x = i / 100.0;
        printf("x = %8.6f       ", x);
        printf("x = %8.6f\n", j);
    }
    return 0;
}