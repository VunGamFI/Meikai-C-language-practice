#include<stdio.h>
int main(void){
    int v[5];
    int j = 5;

    for(int i = 0; i < 5; i++){
        v[i] = j;
        j--;
    }

    for(int i = 0; i < 5; i++)
        printf("v[%d] = %d\n", i, v[i]);
    return 0;
}