#include <stdio.h>
#include <string.h>

int main(){
    char str[200];
    scanf("%s",str);
    int len = strlen(str), flag=1, st = 0, end = len-1;

    while(st  < end){
        if(str[st]!=str[end]){
            flag = 0;
            break;
        }
        st++; end--;
    }

    if(!flag){
        printf("%s is not a palindrome", str);
    }
    else{
        printf("%s is a palindrome", str);
    }   
}
