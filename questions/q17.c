#include<stdio.h>
int main(){
    int number;
    printf("enter a number: \n");
    scanf("%d" , &number);
    if(number >= 1 ){
        printf("natural numbers:");
    }
    else{
        printf("not a natural number");
    }
    return 0;
}