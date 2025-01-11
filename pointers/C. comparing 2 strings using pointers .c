#include <stdio.h>

int compre(char *str1, char *str2){
    while(*str1!='\0' && *str2!='\0'){
        if(*str1 != *str2){
            return 0;
        }
        str1++;
        str2++;
    }
    
    return 1;
}

int main() {
	char str1[200], str2[200];
	scanf("%s%s", str1, str2);
    if(compre(str1, str2)) printf("theyre same");
    else printf("there not same");
    return 0;
}
