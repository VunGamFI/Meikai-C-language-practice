#include<stdio.h>
#define NAME_LEN 64
typedef struct student{
    char name[NAME_LEN];
    int height;
    float weight;
    long schols;
}Student;

void hiroko(Student *std){
    if(std -> height < 180)     std -> height = 180;
    if(std -> weight > 80)      std -> weight = 80;
}

int main(void){
    Student student_1;
    printf("姓名：");      scanf("%s", student_1.name);
    printf("身高：");      scanf("%d", &student_1.height);
    printf("体重：");      scanf("%f", &student_1.weight);
    printf("奖学金：");     scanf("%ld", &student_1.schols);

    hiroko(&student_1);

    printf("姓名 = %s\n", student_1.name);
    printf("身高 = %d\n", student_1.height);
    printf("体重 = %.1f\n", student_1.weight);
    printf("奖学金 = %ld\n", student_1.schols);
    return 0;
}