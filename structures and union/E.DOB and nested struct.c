#include <stdio.h>
typedef struct DOB{
    int day;
    int month;
    int year;
} dob;

typedef struct PERSON{
    char name[100];
    dob date_of_birth;
}pers;

int main() {
    pers persn;
    
    scanf("%s",persn.name);
    scanf("%d%d%d",
        &persn.date_of_birth.day,
        &persn.date_of_birth.month,
        &persn.date_of_birth.year);
    
    printf("%s\n",persn.name);
    printf("%d\n",persn.date_of_birth.day);
    return 0;
}

