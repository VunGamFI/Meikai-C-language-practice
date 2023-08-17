#include<stdio.h>
void rev_intary(int v[], int n){
    int temp[n];
    for(int i = 0; i < n; i++)
        temp[i] = v[n - i - 1];
    for(int i = 0; i < n; i++)
        v[i] = temp[i];
}

void print_array(const int v[], int n){
    printf("{ ");
    for(int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("}");
}

int main(void){
    int test[8] = {1, 2, 3, 4, 5, 6, 7, 8};

    rev_intary(test, 8);
    puts("倒序排列");
    printf("test = ");
    print_array(test, 8);
    putchar('\n');
    return 0;
}
