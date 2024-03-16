#include<stdio.h>
#include<string.h>
struct vectors{
    int x;
    int y;
};
void calcsum(struct vectors v1 , struct vectors v2 , struct vectors sum);
int main(){
    struct vectors v1 = {5,10};
    struct vectors v2 = {4,60};
    struct vectors sum = {0};
    calcsum(v1 , v2 , sum);
    return 0;
}
void calcsum(struct vectors v1 , struct vectors v2 , struct vectors sum){
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;
    printf("sum of x is : %d \n" , sum.x);
    printf("sum of y is : %d \n" , sum.y);
}
