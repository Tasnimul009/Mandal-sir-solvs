// 6 TA STRING LEKHAR CURRENT NAI

#include <stdio.h>

typedef union ADDRESS {
    char *addrs; 
    int zip;     
} basha;

int main() {
    basha addrs;

    
    addrs.addrs = "RUET ER CHIPA";
    printf("ami thaki: %s\n", addrs.addrs);

    addrs.zip = 42420; 
    printf("zip code: %d\n", addrs.zip);

    return 0;
}
