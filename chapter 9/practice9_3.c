#include<stdio.h>
#include<string.h>
#define NUMBER 5
int main(void){
    char s[NUMBER][128];
    int count = 0;

    for(int i = 0; i < NUMBER; i++){
        printf("s[%d]：", i);
        scanf("%s", s[i]);
        if(strcmp(s[i], "$$$$$")){
            count++;
        }
        else{
            break;
        }
    }
    putchar('\n');
    for(int i = 0; i < count; i++)
        printf("s[%d] = \"%s\"\n", i, s[i]);
    return 0;
}