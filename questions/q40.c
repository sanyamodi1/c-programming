#include<stdio.h>
int percentage(int maths , int science , int sanskrit);
int main(){
    int maths , science , sanskrit;
    printf("Enter the marks of maths , science , sanskrit : ");
    scanf("%d %d %d" , &maths , &science , &sanskrit);
    int total = percentage( maths , science , sanskrit);
    printf("The percentage is : %d" , total);
    return 0;
}
int percentage(int maths , int science , int sanskrit){
    return (((science + maths + sanskrit)/3) );
}

