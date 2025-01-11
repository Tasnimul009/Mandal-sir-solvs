#include <stdio.h>
#include <string.h>
int find_substr(char str[], char substr[]){
    int n = strlen(str), m = strlen(substr);

    for(int i=0;i<=n-m;i++){
        int j;

        for(j=0;j<m;j++){
            if(str[i+j] != substr[j]) break;
        }
        if(j==m){
            return i;
        }
    }

    return -1;
}
int main() {
    char str[200], subStr[100], replace[200];
    scanf("%s%s%s",str, subStr, replace);
    int ind = find_substr(str, subStr);
    if(ind == -1){
        printf("this sub string is not found in the sentence");
    }

    else{
        for(int i=ind;i<strlen(subStr);i++){
            str[i] = replace[i-ind];
        }
        printf("%s", str);
    }


}
