#include<stdio.h>
int str_length(char s[]){
    int len = 0;
    while(s[len])
        len++;
    return len;
}

void put_stringn(const char s[], int n){
    for(int i = 0; i < n; i++)
        for(int j = 0; j < str_length(s); j++)
            putchar(s[j]);
}

int main(void){
    char str[10];
    int n;

    printf("请输入字符串：");
    scanf("%s", str);
    printf("显示次数：");
    scanf("%d", &n);

    put_stringn(str, n);
    return 0;
}