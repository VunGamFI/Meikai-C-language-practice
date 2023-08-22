#include<stdio.h>
void swap(int *n_1, int *n_2){
    int temp = *n_1;
    *n_1 = *n_2;
    *n_2 = temp;
}

void sort3(int *n1, int *n2, int *n3){
    if(*n1 > *n2){
        if(*n3 < *n2)
            swap(n1, n3);
        else if(*n3 > *n1)
            swap(n1, n2);
        else{
            swap(n1, n3);
            swap(n1, n2);
        }
    }else{
        if(*n3 > *n1 && *n3 < *n2)
            swap(n2, n3);
        else if(*n3 < *n1){
            swap(n1, n3);
            swap(n2, n3);
        }
    }
}

int main(void){
    int input[3];
    for(int i = 0; i < 3; i++){
        printf("第%d个整数：", i + 1);
        scanf("%d", &input[i]);
    }

    sort3(&input[0], &input[1], &input[2]);
    puts("升序排列");
    for(int i = 0; i < 3; i++){
        printf("input[%d] = %d\n", i, input[i]);
    }
    return 0;
}