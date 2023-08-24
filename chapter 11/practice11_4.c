#include<stdio.h>
void put_string(const char *s){
    while(*s)
        printf("%c", *s++);
}

int main(void){
    char test[128] = "ABCDE";

    put_string(test);
    return 0;
}