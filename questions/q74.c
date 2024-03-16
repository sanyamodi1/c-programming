#include<stdio.h>
#include<string.h>
struct complex{
    int real;
    int imag;
};

int main(){
    struct complex number1 ={3,4};
    struct complex *ptr = &number1;
    printf("imag part = %d \n" , ptr -> imag);
    printf("real part = %d \n" , ptr -> real);
    return 0;
}