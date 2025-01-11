#include <stdio.h>
#include <string.h>

int main() {
    	char str[200];
    	int len = 0;
    	scanf("%s",str);
    	char *p = str;
    	while(*p != '\0'){
    	    p++;
    	    len++;
    	}
    	printf("%d", len);
    	return 0;
}

