#include<stdio.h>
void hello();
void goodbye();
int main(){
    hello();
    goodbye();
    hello();
    return 0;
}
void hello(){
    printf("hello\n");
}
void goodbye(){
    printf("Good-bye \n");
}