#include<stdio.h>
int main(void){
    static double test[5];

    for(int i = 0; i < 5; i++)
        printf("test[%d] = %f\n", i, test[i]);
    return 0;
}