#include<stdio.h>
int main(void){
    int input_1, input_2;
    int height, width;

    printf("一边：");
    scanf("%d", &input_1);
    printf("另一边：");
    scanf("%d", &input_2);

    height = input_1 < input_2 ? input_1 : input_2;
    width = input_1 > input_2 ? input_1 : input_2;

    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++)
            printf("*");
        putchar('\n');
    }
    return 0;
}