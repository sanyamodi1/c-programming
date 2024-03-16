#include<stdio.h>
int main(){
    int a,b,c;
    int d;
    printf("enter three numbers - ");
    scanf(" %d" , &a);
    scanf(" %d" , &b);
    scanf(" %d" , &c);
// scanf( " %d %d %d" , &a, &b , &c);
    d = (a+b+c)/3;
    printf(" the average of three numbers is %d" , d);
    return 0;
}