// Write a C program to compute the monthly pay of 100 employees using each employee’s name, basic pay. The DA is
// computed as 52% of the basic pay. Gross-salary (basic pay + DA). Print the employees name and gross salary
#include <stdio.h>

typedef struct EMP{
    char *name;
    int basic;
} emp;

void display(emp infos);
int main() {
    emp inf;
    inf.name = "agent 47";
    inf.basic = 100;
    display(inf);
    return 0;
}

void display(emp infos){
    printf("name : %s\n", infos.name);
    float gross_pay = infos.basic+(float)infos.basic*(0.50);
    printf("Gross pay: %0.2f\n", gross_pay);
}

