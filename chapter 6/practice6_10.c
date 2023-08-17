#include<stdio.h>
void intary_rcpy(int v1[], const int v2[], int n){
    for(int i = 0; i < n; i++)
        v1[i] = v2[n - i - 1];
}

void print_array(const int v[], int n){
    printf("{ ");
    for(int i = 0; i < 10; i++)
        printf("%d ", v[i]);
    printf("}");
}

int main(void){
    int test[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int result[10];

    intary_rcpy(result, test, 10);

    puts("倒序排列");
    printf("result = ");
    print_array(result, 10);
    return 0;
}