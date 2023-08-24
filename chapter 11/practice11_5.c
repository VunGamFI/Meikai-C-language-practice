#include<stdio.h>
int str_chnum(const char *s, int c){
    size_t len = 0;
    while(*s){
        if((*s == c)){
            len++;
        }
    *s++;
    }
    return len;
}

int main(void){
    char test[128] = "ABBCDE";
    char n = 'B';

    printf("字符串\"%s\"中字符\'%c\'的个数为%d个。\n", test, n, str_chnum(test, n));
    return 0;
}