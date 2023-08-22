#include<stdio.h>
void decrement_date(int *y, int *m, int *d){
    if(*m == 1 || *m == 8 || *m == 4 || *m == 6 || *m == 9 || *m == 11){
        if(*d == 1){
            *d = 31;
            if(*m == 1){
                *m = 12;
                *y -= 1;
            }else
                *m -= 1;
        }else
            * d -= 1;
    }else{
        if(*d == 1){
            if(*m == 3){
                if (*y % 4 == 0 && *y % 100 != 0){
                    *d = 29;
                }else
                    *d = 28;
            }else
                *d = 30;
            *m -= 1;
        }else
            *d -= 1;
    }
}

void increment_date(int *y, int *m, int *d){
    int date;
    if(*m == 1 || *m == 3 || *m == 5 || *m == 7 || *m == 8 || *m == 10 || *m == 12)
        date = 31;
    else if(*m == 2){
        if (*y % 4 == 0 && *y % 100 != 0)
            date = 29;
        else
            date = 28;
    }else
        date = 30;

    if(*m == 1 || *m == 3 || *m == 5 || *m == 7 || *m == 8 || *m == 10 || *m == 12){
        if(*d == date){
            *d = 1;
            if(*m == 12){
                *y += 1;
                *m = 1;
            }else
                *m += 1;
        }else
            *d += 1;
    }else{
        if(*d == date){
            *d = 1;
            *m += 1;
        }else
            *d += 1;
    }
}

int main(void){
    int year, month, date;

    printf("年：");       scanf("%d", &year);
    printf("月：");       scanf("%d", &month);
    printf("日：");       scanf("%d", &date);

    decrement_date(&year, &month, &date);
    printf("前一天为%d年%d月%d日。\n", year, month, date);
    increment_date(&year, &month, &date);
    printf("后一天为%d年%d月%d日。\n", year, month, date);
    return 0;
}