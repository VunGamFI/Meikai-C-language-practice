#include<stdio.h>
void set_idx(int *v, int n){
    for(int i = 0; i < n; i++)
        v[i] = i;
}

int main(void){
    int n = 10;
    int test[n];

    set_idx(test, n);
    for(int i = 0; i < n; i++)
        printf("test[%d] = %d\n", i, test[i]);
    return 0;
}