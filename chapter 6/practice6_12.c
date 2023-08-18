#include<stdio.h>
void mat_mul(const int a[4][3], const int b[3][4], int c[3][3]){
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            for(int k = 0; k < 4; k++)
                c[i][j] += a[k][j] * b[j][k];
}

void print_array(const int v[3][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++)
            printf("%4d", v[i][j]);
        putchar('\n');
    }
}

int main(void){
    int a[4][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int b[3][4] = {12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int c[3][3] = {0};

    mat_mul(a, b, c);

    puts("矩阵c");
    print_array(c);
    return 0;
}