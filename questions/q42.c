#include<stdio.h>
int main(){
    int n;
    int t1=0,t2=1;
    int nextTerm = t1+t2;
    printf("Enter the no of terms :");
    scanf("%d" , &n);
    printf("fibonacci series : \n %d \n %d \n" , t1,t2);
    for (int i =3 ; i<=n ; i++){
        printf(" %d \n" , nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1+ t2;
    }
   
    
    return 0;
}