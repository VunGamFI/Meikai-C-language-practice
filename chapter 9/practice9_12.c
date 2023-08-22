#include<stdio.h>
void rev_string(char s[][128], int n){
    printf("{");
    for(int i = n - 1; i >= 0; i--){
        if(i == 0)
            printf("\"%s\"", s[i]);
        else
            printf("\"%s\", ", s[i]);
    }
    printf("}");
}

int main(void){
    char test[][128] = {"SEC", "ABC"};
    rev_string(test, 2);
    return 0;
}