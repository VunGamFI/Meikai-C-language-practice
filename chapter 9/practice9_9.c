#include<stdio.h>
int str_length(char s[]){
    int len = 0;
    while(s[len])
        len++;
    return len;
}

void rev_string(char s[]){
    char temp;
    for(int i = 0; i < str_length(s) / 2; i++){
        temp = s[i];
        s[i] = s[str_length(s) - 1 - i];
        s[str_length(s) - 1 - i] = temp;
    }
}

int main(void){
    char str[10];
    int n;

    printf("请输入字符串：");
    scanf("%s", str);

    rev_string(str);
    for(int i = 0; i < str_length(str); i++)
        putchar(str[i]);
    return 0;
}