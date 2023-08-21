#include<stdio.h>
int main(void){
    char s[] = "ABC";
    s[0] = '\0';
    printf("变换后的字符串为\"%s\"。\n", s);
    return 0;
}