#include<stdio.h>
int main(void){
    int array_1[4][3];
    int array_2[3][4];
    int array_3[4][4] = {0};

    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 3; j++){
            printf("array_1[%d][%d] = ", i, j);
            scanf("%d", &array_1[i][j]);
        }

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 4; j++){
            printf("array_2[%d][%d] = ", i, j);
            scanf("%d", &array_2[i][j]);
        }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++)
            for(int z = 0; z < 3; z++)
            array_3[i][j] += array_1[i][z] * array_2[z][j];
    }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++)
            printf("%4d", array_3[i][j]);
        putchar('\n');
    }
}