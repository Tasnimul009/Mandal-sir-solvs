
//question: calculate number of digits of a number using recursion 

#include <stdio.h>

int numOf_dig(int n){
    if(n==0) return 0;
    
    return 1+numOf_dig(n/10);
}

int main() {
	printf("%d", numOf_dig(111));
	
	return 0;
}

