#include<stdio.h>
int str_length(const char s[]){
    int len = 0;
    while(s[len])
        len++;
    return len;
}

void null_string(char s[]){
    for(int i = 0; i < str_length(s); i++)
        s[i] = '\0';
}

int main(void){
    char str[5][128] = {"34", "77", "98", "10"};
    null_string(str);
    for(int i = 0; i < 5; i++)
        printf("str[%d] = %s\n", i, str);
    return 0;
}