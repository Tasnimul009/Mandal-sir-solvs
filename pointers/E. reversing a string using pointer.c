#include <stdio.h>

int main() {
    char str[200];
    scanf("%s", str);
    
    char *start = str;
    char *end = str;
    
    while(*end != '\0'){
        end++;
    }
    
    end--;
    
    while(start < end){
        char temp = *start;
        
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    
    printf("%s", str);
    return 0;
}

