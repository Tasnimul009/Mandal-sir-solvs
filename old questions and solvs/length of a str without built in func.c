//lenght of a string without using strlen
#include <stdio.h>

int len(char *str){
    int len = 0;
    while(*str){
        str++;
        len++;
    }
    return len;
}
int main() {
	char str[] = "vugicugi";
    printf("%d",len(str));
    return 0;
}

