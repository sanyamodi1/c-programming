#include<stdio.h>
int main(){
    int n,j;
    printf("Enter a number:");
    scanf("%d" , &n);
    int sum =0;
    // for(int i =1 , j=n; i<= n && j>=1; i++ , j--){
    //     sum = sum + i; 
    //     printf("%d \n" , j);
    // }
    for(int  j=n;   j>=1;  j--){
        sum = sum + j ; 
        printf("%d \n" , j);
    }

    printf(" sum is %d \n" , sum);

    // for (int i=n ; i>= 1;i-- ){
    //     printf("%d \n" , i);
    // }
    return 0;
}