#include<stdio.h>
void swap (int a , int b);
void _swap(int *a , int *b);
int main(){
    int a = 3 , b = 5;
    swap (a , b);
    printf("a = %d & b = %d" , a,b);
    _swap (&a , &b);
    printf("a = %d & b = %d" , a , b);
    return 0;

}
void swap (int a , int b){
    int t;
    t = a;
    a = b;
    b = t;
    printf("a = %d & b = %d \n" , a , b);  
}
void _swap(int *a , int *b){
    int t;
    t = *a;
    *a = *b;
    *b = t;
    printf("a = %d and b = %d \n" , *a , *b );
}