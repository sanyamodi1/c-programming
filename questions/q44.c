#include<stdio.h>
#include<math.h>
float sqrRoot( double n);
int main(){
    float n ,t;
    printf("Enter the number :");
    scanf("%f" , &n);
    printf("the square root is %f" , sqrRoot(n));
    return 0;
}
    float sqrRoot(double n){
    float t = pow(n,0.5);
    return t;    
}   
