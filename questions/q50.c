#include<stdio.h>
// void printAddress(int n);
// int main(){
//     int n;
//     printf("%p \n" , &n);
//     printAddress(n);
//     return 0;
// }
// void printAddress(int n){
//     printf("%p \n" , &n);
//     void printAddress(int n);
void printAddress(int *n);
int main(){
    int n = 4;
    printf("the address is %u \n" , &n);
    printAddress(&n);
    return 0;
}
void printAddress(int *n){
    printf("the address is %u \n" , n);
}