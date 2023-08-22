#include<stdio.h>
#include<string.h>
#define NUM 10
#define NUMBER 12
void put_strary(const char s[NUM][NUMBER], int n){
    for(int i = 0; i < n; i++)
        printf("s[%d] = \"%s\"\n", i, s[i]);
}

int main(void){
    char cs[NUM][NUMBER];
    int count = 0;
    for(int i = 0; i < NUM; i++){
        printf("cs[%d] = ", i);
        scanf("%s", cs[i]);
        if(strcmp(cs[i], "$$$$$")){
            count++;
        }else
            break;
    }
    putchar('\n');
    put_strary(cs, count);
    return 0;
}