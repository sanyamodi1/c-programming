#include<stdio.h>
int main(){
    int n1,n2,sum=0,n;
    printf("Enter the first number of the range;");
    scanf("%d" , &n1);
    printf("Enter the last number of the range;");
    scanf("%d" , &n2);
    for(int i = n1 ; i<= n2 ; i++){
        for(n=2 ; n <= i ; n++){
            if (i%n == 0)
            break;
        }
        if(i==n)
        printf("%d \n" , n);
    }
    return 0;
}