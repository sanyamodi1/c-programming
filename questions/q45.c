#include<stdio.h>
char temp(int n);
int main(){
    int n;
    printf("Enter thr temp in C:");
    scanf("%d" , &n);
    temp(n);
    return 0;
}
char temp(int n){
    char hot;
    char cold;
    if (n <= 27){
       printf("cold");
    }
    else {
        printf("hot");
    }
}