#include<stdio.h>
#include<string.h>
int power(int num, int n){
    for(int i = 0; i < n; i++)
        num *= 10;
    return num;
}

double divid(double num, int n){
    for(int i = 0; i < n; i++)
        num /= 10;
    return num;
}

int strtoi(const char *nptr){
    int num = 0;
    int length = strlen(nptr);

    for(int i = length - 1; i >= 0; i--){
        num += power((*nptr++ - '0'), i);
    }
    return num;
}

long strtol(const char *nptr){
    long num = 0;
    int length = strlen(nptr);

    for(int i = length - 1; i >= 0; i--){
        num += power((*nptr++ - '0'), i);
    }
    return num;
}

double strtof(const char *nptr){
    double num = 0;
    int count_n = 0;
    char *tmp = nptr;

    while(*tmp++ != '.')                              //整数位数
        count_n++;

    int count_f = strlen(nptr) - count_n - 1;       //小数位数

    for(int i = strlen(nptr) - 2; i >= 0; i--){
        if(*nptr == '.'){
            *nptr++;
            i++;
        }
        else
            num += power((*nptr++ - '0'), i);
    }
    num = divid(num, count_f);
    return num;
}

int main(void){
    char str_int[128];
    char str_f[128];
    printf("请输入字符串：");
    scanf("%s", str_int);
    printf("带小数点的字符串：");
    scanf("%s", str_f);

    printf("转换为int型后为%d。\n", strtoi(str_int));
    printf("转换为long型后为%ld。\n", strtol(str_int));
    printf("转换为double型后为%f。\n", strtof(str_f));
    return 0;
}