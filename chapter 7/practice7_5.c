#include<stdio.h>
int count_bits(unsigned x){
    int bits = 0;
    while(x){
        if(x & 1U)  bits++;
        x >>= 1;
    }
    return bits;
}

int int_bits(void){
    return count_bits(~0U);
}

void print_bits(unsigned x){
    for(int i = int_bits() - 1; i >= 0; i--)
        putchar(((x >> i) & 1U) ? '1' : '0');
}

unsigned reset_n(unsigned x, int pos, int n){
    unsigned t = (x << (32 - pos + 1));
    t >>= (32 - pos + 1);
    unsigned temp = (x >> (pos + n - 1));
    temp <<= (pos + n - 1);
    return temp + t;
}

unsigned set_n(unsigned x, int pos, int n){
    unsigned temp = reset_n(x, pos, n);
    unsigned t = (2147483647 >> (32 - (pos + n - 1)));
    t <<= (pos - 1);
    return temp + t;
}

unsigned inverse_n(unsigned x, int pos, int n){
    unsigned temp = reset_n(x, pos, n);
    unsigned t = (~x << (32 - (pos + n - 1)));
    t >>= 32 - n;
    t <<= (pos - 1);
    return temp + t;
}

int main(void){
    unsigned test;
    int pos, n;
    printf("整数：");      scanf("%d", &test);
    printf("第几位开始:");       scanf("%d", &pos);
    printf("连续几位:");       scanf("%d", &n);

    print_bits(test);
    putchar('\n');
    print_bits(set_n(test, pos, n));
    putchar('\n');
    print_bits(reset_n(test, pos, n));
    putchar('\n');
    print_bits(inverse_n(test, pos, n));
    return 0;
}