#include<stdio.h>
int min_of(const int v[], int n){
    int min = v[0];
    for(int i = 1; i < n; i++)
        if(min > v[i])
            min = v[i];
    return min;
}

int main(void){
    int test[8] = {4, 8, 9, 10, -1, 8, 9, 14};
    printf("最小值为%d。\n", min_of(test, 8));
    return 0;
}