#include<stdio.h>
int main(){
    int number,a,b,c,sum;
    printf("enter a 3 numbers : \n");
    scanf("%d%d%d" , &a,&b,&c);
    sum = a*a*a + b*b*b + c*c*c;
    number =  100*a + 10*b + c;
    printf("the number is %d \n" , number);

    if (sum == number){
        printf(" this is a armstrong number \n");
    }
    else {
        printf("not a armstrong number \n");
    }



    return 0;

}