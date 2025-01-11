//question: remove chars from a string if char is not alphabetic
#include <stdio.h>

void del_char(char *str){
    char *p1 = str, *p2 = str;
    while(*p1){
        if(isalpha(*p1)){
            *p2 = *p1;
            p2++;
        }
        p1++;
    }
    *p2 = '\0';
}
int main(){
    char str[] = "hello";
    del_char(str);
    printf("%s", str);
    return 0;
    
}