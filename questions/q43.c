#include<stdio.h>
int sumofdigits(int n);
int main(){
    int n;
    printf("enter a number :");
    scanf("%d" , &n);
    printf("The sum is %d" , sumofdigits(n));
    return 0;
}
int sumofdigits(int n){
    if (n == 0){
        return 0;
    }
    return (n%10 + sumofdigits(n/10));

}