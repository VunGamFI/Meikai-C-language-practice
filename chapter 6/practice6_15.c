#include<stdio.h>
int count = 0;
void put_count(){
    count++;
}

int main(void){
    for(int i = 0; i < 6; i++){
        put_count();
        printf("put_count：第%d次\n", count);
    }
    return 0;
}
