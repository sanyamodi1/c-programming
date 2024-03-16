#include<stdio.h>
int factorial(int n);
int main(){
    int n;
    printf("Enter the number for which you want factorial");
    scanf("%d" , &n);
    printf("The factorial is : %d" , factorial(n));
    return 0;
}
int factorial(int n){
    if (n == 0){
        return 1;
    }
    int factnm1 = factorial(n-1);
    int factn = factnm1*n;
    return factn;
}
