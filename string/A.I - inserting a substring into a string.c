#include <stdio.h>
#include <string.h>

void subString(char mainStr[], char subStr[], int pos){
    
    int i=0; 
    char result[200];
    for(i=0;i<pos;i++)
        result[i] = mainStr[i];

    for(int j=0; subStr[j] !='\0';j++){
        result[i++] = subStr[j];
    }

    for(int j=pos; mainStr[j]!='\0';j++){
        result[i++] = mainStr[j];
    }

    result[i] = '\0';
    printf("%s",result);
}

int main(){
    char mainStr[200], subStr[100];
    scanf("%s%s", mainStr, subStr);
    int pos;
    scanf("%d", &pos);

    subString(mainStr,subStr,pos);

    return 0;
}
