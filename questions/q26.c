#include<stdio.h>
int main(){
    int n,fact=1;
    printf("Enter a nmber :");
    scanf("%d" , &n);
    
    for (int i=1 ; i<=n ; i++){
     fact = fact*i ;   
    }

    printf("final factor is %d \n" , fact);
    return 0;
}