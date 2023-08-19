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

unsigned set(unsigned x, int pos){
    unsigned t = (1 << (pos - 1));
    unsigned temp = x | t;
    return temp;
}

unsigned reset(unsigned x, int pos){
    unsigned t = (x << (32 - pos + 1));
    t >>= (32 - pos + 1);
    unsigned temp = (x >> pos);
    temp <<= pos;
    return temp + t;
}

unsigned inverse(unsigned x, int pos){
    unsigned t = (~x) << (32 - pos);
    t >>= 31;
    t <<= (pos - 1);
    unsigned temp = reset(x, pos);
    return temp + t;
}

int main(void){
    unsigned test;
    int pos;
    printf("整数：");      scanf("%d", &test);
    printf("改变第几位:");       scanf("%d", &pos);

    print_bits(test);
    putchar('\n');
    print_bits(set(test, pos));
    putchar('\n');
    print_bits(reset(test, pos));
    putchar('\n');
    print_bits(inverse(test, pos));
    return 0;
}