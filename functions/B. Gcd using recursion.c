#include <stdio.h>

int gcd(int a,int b){
    if(a==0) return b;
    if(b==0) return a;
    return gcd(b, a%b);
}

int main() {
	printf("%d", gcd(5,10));
	return 0;
}

