//capitalize the first letter of a sentence
#include <stdio.h>
void capi(char *str){
    int flag = 1;
    while(*str){
        if(*str==' '){
            flag = 1;
        }
        if(flag==1 && isalpha(*str)){
            *str-=32;
            flag = 0;
        }
        str++;
    }
}
int main() {
	char str[] = "hello i am tasnimul";
    capi(str);
    printf("%s",str);
    return 0;
}

