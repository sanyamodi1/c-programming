#include<stdio.h>
void maxno(int *a , int *b );

int main(){
    int a , b;
    printf("enter two number:");
    scanf("%d %d" , &a , &b);
    maxno(&a , &b);

    return 0;
}
void maxno(int *a , int *b ){
    if (*a > *b){
        printf("%d is the max no " , *a);
    }
    else{
        printf("%d is the max no " , *b);
    }
    
}