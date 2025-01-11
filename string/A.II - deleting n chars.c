#include <stdio.h>
#include <string.h>

void delChar(char mainStr[],int pos, int n){

    int len = strlen(mainStr);
    if(pos < 0 || pos > len || pos+n > len){
        printf("invalid values\n");
        return;
    }

    for(int i=pos;i+n<len;i++){
        mainStr[i] = mainStr[i+n];
    }
    mainStr[len-n] = '\0';
}
int main(){
    char str[200];
    int pos,n;
    scanf("%s%d%d",str,&pos,&n);
    delChar(str,pos,n);
    printf("%s",str);
}
