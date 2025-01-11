// swapping 2 numbers using pointers
#include <stdio.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int a=5,b=6;
    swap(&a,&b);
    printf("%d %d",a,b);
    return 0;
}

