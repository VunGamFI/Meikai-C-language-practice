#include<stdio.h>
int main(void){
    int n;
    printf("sizeof (1) = %lu\n", sizeof(1));
    printf("sizeof (+1) = %lu\n", sizeof(+1));
    printf("sizeof (-1) = %lu\n", sizeof(-1));
    printf("sizeof (unsigned)(-1) = %u\n", (unsigned)sizeof(-1));
    printf("sizeof (double)(-1) = %f\n", (double)sizeof(-1));
    printf("sizeof ((double) -1) = %lu\n", sizeof((double)-1));
    printf("sizeof ((n) + 2) = %lu\n", sizeof(n) + 2);
    printf("sizeof (n + 2) = %lu\n", sizeof(n + 2));
    printf("sizeof (n + 2) = %lu\n", sizeof(n + 2.0));
    return 0;
}