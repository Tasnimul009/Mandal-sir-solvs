#include <stdio.h>
#include <string.h>
int main(){
    char str[200], subStr[200];
    scanf("%s%s", str, subStr);
    int ind, j=0,ct=0;
    for(ind=0;ind<strlen(str);ind++){
        if(str[ind]==subStr[j]){
            j++;
            if(subStr[j]=='\0'){
                ct++;
                j=0;
            }
        }
        else{
            j=0;
        }
    }

    printf("%d", ct);
}    
