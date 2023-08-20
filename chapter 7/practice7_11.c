#include<stdio.h>
int main(void){
    float sum_1 = 0.0;
    float sum_2 = 0.0;
    float temp;

    for(float i = 0.0; i <= 1.0; i += 0.01)
        sum_1 += i;

    for(int i = 0; i <= 100; i++){
        temp = i / 100.0;
        sum_2 += temp;
    }

    printf("%8.6f\n", sum_1);
    printf("%8.6f\n", sum_2);
    return 0;
}