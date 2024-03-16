#include<stdio.h>
float power(float n, float t);
int main(){
    float n,t;
    printf("Enter the no : ");
    scanf("%f %f" , &n , &t);
    printf("The ans is %f" , power(n,t));
    return 0;
}
    float power(float n , float t ){
     float ans;
     ans = n;
     
    for (int i = 1 ; i<=t ; i++){
    ans = ans * n;
    return ans;
    }
}