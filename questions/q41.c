#include<stdio.h>
int fibonacci(int n);
int main(){
    int n;
    printf("Enter the number you want fibonacci for: \n");
    scanf("%d" , &n);
    printf("The fibonacci sequence is %d " , fibonacci(n));
    return 0;
}
int fibonacci(int n){
    if(n==0|| n==1){
        if (n==0){
            return 0;
        }
        if (n==1){
            return 1;
        }
    }
    int fibNm1 = fibonacci(n-1);
    int fibNm2 = fibonacci(n-2);
    int fibN = fibNm1 + fibNm2 ;
    printf("fib of %d is : %d.\n" ,n   ,fibN );
    return fibN;

}
