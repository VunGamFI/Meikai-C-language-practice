#include<stdio.h>
int search_idx(const int v[], int idx[], int key, int n){
    int count = 0;
    for(int i = 0; i < n; i++)
        if(v[i] == key){
            idx[count] = i;
            count++;
        }
    return count;
}

int main(void){
    int v[] = {1, 7, 5, 7, 2, 4, 7};
    int key = 7;
    int idx[7];
    int count = search_idx(v, idx, key, 7);

    printf("idx = { ");
    for(int i = 0; i < count; i++)
        printf("%d ", idx[i]);
    puts("}");
    printf("元素个数为%d。\n", count);
    return 0;
}