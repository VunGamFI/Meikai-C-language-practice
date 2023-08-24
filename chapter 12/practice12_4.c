#include<stdio.h>
#include<string.h>
#define NUMBER 5
#define NAME_LEN 64

typedef struct{
    char name[NAME_LEN];
    int height;
    float weight;
    long schols;
}Student;

void swap_Student(Student *x, Student *y){
    Student temp = *x;
    *x = *y;
    *y = temp;
}

void sort(Student a[], int n, int choice){
    for(int i = 0; i < n - 1; i++){
        for(int j = n - 1; j > i; j--){
            if(choice == 0){
                if (strcmp(a[j - 1].name, a[j].name))
                    swap_Student(&a[j - 1], &a[j]);
            }else{
                if(a[j - 1].height > a[j].height)
                    swap_Student(&a[j - 1], &a[j]);
            }
        }
    }
}

int main(void){
    int choice;
    Student std[NUMBER];

    for(int i = 0; i < NUMBER; i++){
        printf("姓名：");      scanf("%s", std[i].name);
        printf("身高：");      scanf("%d", &std[i].height);
        printf("体重：");      scanf("%f", &std[i].weight);
        printf("奖学金：");     scanf("%ld", &std[i].schols);
    }

    for(int i = 0; i < NUMBER; i++)
        printf("%-8s %6d%6.1f%7ld\n",
               std[i].name, std[i].height, std[i].weight, std[i].schols);

    do{
        printf("排序方式    0 -- 按姓名 / 1 -- 按身高：");
        scanf("%d", &choice);
    }while(choice < 0 || choice > 1);

    sort(std, NUMBER, choice);

    for(int i = 0; i < NUMBER; i++)
        printf("%-8s %6d%6.1f%7ld\n",
               std[i].name, std[i].height, std[i].weight, std[i].schols);
    return 0;
}