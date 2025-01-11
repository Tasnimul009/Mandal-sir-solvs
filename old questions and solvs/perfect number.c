
//question: check for a perfect number

#include <stdio.h>

int per_num(int n){
    int sum = 0;
    for(int i=2;i<=n/2;i++)
        if(n%i==0) sum += i;
    if(sum == n) return 1;
    return 0;
}

int main() {
    int n;
    scanf("%d",&n);
	char *res = (per_num(n)) ? "a Perfect number" : "not a Perfect number";
	printf("%d is %s",n,res);
	return 0;
}

