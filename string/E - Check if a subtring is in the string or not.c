#include <stdio.h>

int find_substr(char str[], char substr[]){
    int l=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i] == substr[l]){
            l++;
        }
        else{
            l=0;
        }
        if(l==strlen(substr)){
            return i-strlen(substr)+1;
        }
        
    }
    
    return -1;
}
int main(){
    char substr[200], str[100];
    scanf("%s%s",str,substr);
    printf("%d",find_substr(str, substr) );
}
