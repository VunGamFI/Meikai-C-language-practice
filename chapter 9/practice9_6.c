#include<stdio.h>
int str_length(const char s[]){
    int len = 0;
    while(s[len])
        len++;
    return len;
}

int str_chnum(const char s[], int c){
    int count = 0;
    for(int i = 0; i < str_length(s); i++)
        if(s[i] == c)
            count++;
    return count;
}

int main(void){
    char str[10];
    char n = '1';

    printf("请输入字符串：");
    scanf("%s", str);

    printf("字符%s的个数为%d。\n", n, str_chnum(str, n));
    return 0;
}