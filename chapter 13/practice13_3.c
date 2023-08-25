#include<stdio.h>
typedef struct{
    char name[100];
    double height;
    double weight;
}Human;

void swap_Human(Human *x, Human *y){
    Human temp = *x;
    *x = *y;
    *y = temp;
}

void sort(Human a[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = n - 1; j > i; j--)
            if(a[j - 1].height > a[j].height)
                swap_Human(&a[j - 1], &a[j]);
    }
}

int main(void){
    FILE *fp;
    int ninzu = 0;
    Human std[128];
    Human temp;
    double hsum = 0.0;
    double wsum = 0.0;

    if((fp = fopen("test.dat", "r")) == NULL)
        printf("\a文件打开失败。\n");
    else{
        while(fscanf(fp, "%s%lf%lf", temp.name, &temp.height, &temp.weight) == 3){
            printf("%-10s %5.1f %5.1f\n", temp.name, temp.height, temp.weight);
            std[ninzu] = temp;
            ninzu++;
            hsum += temp.height;
            wsum += temp.weight;
        }
        printf("\n按身高排序。\n");
        sort(std, ninzu);

        for(int i = 0; i < ninzu; i++){
            printf("%-10s %5.1f %5.1f\n", std[i].name, std[i].height, std[i].weight);
        }

        printf("-----------------------\n");
        printf("平均        %5.1f %5.1f\n", hsum / ninzu, wsum / ninzu);
        fclose(fp);
    }
    return 0;
}