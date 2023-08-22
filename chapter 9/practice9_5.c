#include<stdio.h>
int str_length(const char s[]){
    int len = 0;
    while(s[len])
        len++;
    return len;
}

int str_char(const char s[], int c){
    int count = -1;
    for(int i = 0; i < str_length(s); i++){
        if(s[i] == c && i != str_length(s)){
            count = i;
            break;
        }
    }
    return count;
}

int main(void){
    char str[10];
    char n = 'd';

    printf("请输入字符串：");
    scanf("%s", str);

    printf("该元素的下标为%d。\n", str_char(str, n));
    return 0;
}