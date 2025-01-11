#include <stdio.h>

void vow_const(char *str,int v,int cons){
    while(*str != '\0'){
        if(
        *str == 'a'||
        *str == 'e'||
        *str == 'i'||
        *str == 'o'||
        *str == 'u') v++;
        else cons++;
        str++;
    }
    printf("vowels = %d, consonents = %d",v,cons);
}

int main() {
    char str[200];
    scanf("%s",str);
    vow_const(str,0,0);
    return 0;
}
