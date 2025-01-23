#include <stdio.h>

typedef struct complx{
    float real;
    float imag;
} cmplx;

void write_complx(cmplx val);
cmplx add_complx(cmplx z1, cmplx z2);
cmplx substract_cmplx(cmplx z1, cmplx z2);
cmplx multi_cmplx(cmplx z1, cmplx z2);

int main() {
    cmplx z1 = {1, 2};
    cmplx z2 = {2, 3};
    
    // Writing z1 and z2
    write_complx(z1);
    write_complx(z2);
    
    // Addition
    cmplx add = add_complx(z1, z2);
    // Subtraction 
    cmplx sub = substract_cmplx(z1, z2);
    // Multiplication
    cmplx mult = multi_cmplx(z1, z2);
    
    printf("The summation is: "); 
    write_complx(add);
    
    printf("\nThe subtraction is: "); 
    write_complx(sub);
    
    printf("\nThe multiplication is: "); 
    write_complx(mult);
    
    return 0;
}

void write_complx(cmplx val) {
    if(val.imag>=0)
    printf("%0.2f + %0.2fi\n", val.real, val.imag);
    else
    printf("%0.2f - %0.2fi\n", val.real, -val.imag);
}

cmplx add_complx(cmplx z1, cmplx z2) {
    cmplx result;
    result.real = z1.real + z2.real;
    result.imag = z1.imag + z2.imag;
    return result;
}

cmplx substract_cmplx(cmplx z1, cmplx z2) {
    cmplx result;
    result.real = z1.real - z2.real;
    result.imag = z1.imag - z2.imag;
    return result;
}

cmplx multi_cmplx(cmplx z1, cmplx z2) {
    cmplx result;
    result.real = z1.real * z2.real - z1.imag * z2.imag;
    result.imag = z1.real * z2.imag + z2.real * z1.imag;
    return result;
}
