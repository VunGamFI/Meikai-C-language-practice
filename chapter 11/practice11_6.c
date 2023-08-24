#include<stdio.h>
char *str_chr(const char *s, int c){
    while(*s){
        if(*s == c)
            return s;
        *s++;
    }
}

int main(void){
    char test[128] = "ABBCDE9";
    char n = '9';

    printf("%s", str_chr(test, n));
    return 0;
}