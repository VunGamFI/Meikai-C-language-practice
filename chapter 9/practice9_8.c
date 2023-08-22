#include<stdio.h>
int str_length(char s[]){
    int len = 0;
    while(s[len])
        len++;
    return len;
}

void put_stringr(const char s[]){
    for(int i = str_length(s) - 1; i >= 0; i--)
        putchar(s[i]);
}

int main(void){
    char str[10];
    int n;

    printf("请输入字符串：");
    scanf("%s", str);

    put_stringr(str);
    return 0;
}