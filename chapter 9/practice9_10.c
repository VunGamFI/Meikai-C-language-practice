#include<stdio.h>
int str_length(char s[]){
    int len = 0;
    while(s[len])
        len++;
    return len;
}

void del_digit(char s[]){
    for(int i = 1; i <= str_length(s); i++){
        if(s[i - 1] >= '0' && s[i - 1] <= '9'){
            for(int j = i - 1; j < str_length(s); j++){
                s[j] = s[j + 1];
            }
            i--;
        }
    }
}

int main(void){
    char str[100];
    int n;

    printf("请输入字符串：");
    scanf("%s", str);

    del_digit(str);
    for(int i = 0; i < str_length(str); i++)
        putchar(str[i]);
    return 0;
}