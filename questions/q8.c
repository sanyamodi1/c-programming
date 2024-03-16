#include<stdio.h>
int main(){
    int itssunday = 0;
    int itsraining = 1;
    int itsmonday=1;
    int a ;
    printf("%d" , itssunday && itsraining);
   printf("%d" , itsmonday || itsraining);
   printf("enter a number:");
   scanf("%d" , &a);
   printf("%d" , a>9 && a<100);

    return 0;
}