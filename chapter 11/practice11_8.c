#include<stdio.h>
void del_digit(char *str){
    char *tmp = str;
    while(*tmp){
        if(*tmp >= '0' && *tmp <= '9')
            *tmp++;
        else
            *str++ = *tmp++;
    }
    *str = '\0';
}

int main(void){
    char test[128] = "123ABC1C9";
    del_digit(test);
    printf("去掉数字字符后的字符串为\"%s\"。\n", test);
    return 0;
}