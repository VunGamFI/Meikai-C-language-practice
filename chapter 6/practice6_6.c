#include<stdio.h>
void alert(int n){
    for(int i = 0; i < n; i++)
        printf("\a");
}

int main(void){
    int n;

    printf("响铃次数：");
    scanf("%d", &n);
    alert(n);
    return 0;
}