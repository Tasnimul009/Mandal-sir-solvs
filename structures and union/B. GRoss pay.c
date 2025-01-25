// Write a C program to compute the monthly pay of 100 employees using each employee’s name, basic pay. The DA is
// computed as 52% of the basic pay. Gross-salary (basic pay + DA). Print the employees name and gross salary
#include <stdio.h>

typedef struct EMP{
    char *name;
    int basic;
} emp;


int main() {
    emp arr[100];
    for(int i=0;i<100;i++){
        emp infos = arr[i];
        fgets(infos.name,strlen(infos.name),stdin);
        scanf("%d",&arr[i].basic);
        float gross_pay = infos.basic+(float)infos.basic*(0.50);
        printf("%f",gross_pay);
    }
    
    return 0;
}


