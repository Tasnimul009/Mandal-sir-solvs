#include <stdio.h>

void rev_str(char *str){
    char *st = str, *end = str;
    while(*end != '\0') end++;
    end--;
    while(st < end){
        char temp = *st;
        *st = *end;
        *end = temp;
        st++;
        end--;
    }
}

int main() {
    char str[] = "HELLO SECTION C";
    rev_str(str);
    printf("%s", str);
    return 0;
}