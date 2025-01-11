#include <stdio.h>

void reverse(char *arr[],int size){
    int st = 0, end=size-1;
    while(st<end){
        char *temp = arr[st];
        arr[st] = arr[end];
        arr[end] = temp;
        st++; end--;
    }
}
int main(){
    char str[200];
    scanf("%s", str);
    int size = strlen(str);
    char *arr[size];
    
    for(int i=0;i<size;i++){
        arr[i] = &str[i];
    }
    
    reverse(arr, size);
    
    for(int i=0;i<size;i++){
        printf("%c ",*arr[i]);
    }
    
    return 0;
    
}