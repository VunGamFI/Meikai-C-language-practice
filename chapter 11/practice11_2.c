#include<stdio.h>
int length(int *v){
    int len = 0;
    while(v[len])
        len++;
    return len;
}

int main(void){
    char a[][5] = {"LISP", "C", "Ada"};
    char *p[] = {"PAUL", "X", "MAC"};

    for(int i = 0; i < length(a[5]); i++)
        printf("a[%d] = \"%s\"\n", i, a[i]);
    for(int i = 0; i < length(*p); i++)
        printf("p[%d] = \"%s\"\n", i, p[i]);
    return 0;
}