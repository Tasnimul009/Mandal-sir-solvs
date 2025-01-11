#include <stdio.h>

void cpying(char *source, char *destination){
    while(*source != '\0'){
        *destination = *source;
        source++;
        destination++;
    }
    *destination = '\0';
    printf("%s", destination);
}
int main() {
	char str[200], destination[200];
    scanf("%s", str);
    cpying(str, destination);
    printf("%s", destination);
    return 0;
}

