#include <stdio.h>
#include <string.h>

void conc(char *str1, char *str2){
    
    while(*str1 != '\0') str1++;
    *str1 = ' '; // adding a gap between str1 and 2
    str1++;
    while(*str2 != '\0'){
        *str1 = *str2;
        str2++;
        str1++;
    }
    *str1 = '\0';
    
}

int main() {
    	char str1[200], str2[200];
    	scanf("%s%s",str1,str2);
    	conc(str1, str2);
    	printf("%s",str1);
    	return 0;
}

