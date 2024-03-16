#include<stdio.h>
int main(){
    float price[3] = {100.0 , 200.0 , 300.0};
    // printf("Enter the price of item : \n");
    // scanf(" %f %f %f" , &price[0] , &price[1] , &price[2]);
    printf("Total price 1 : %f" , price[0] + (0.18*price[0]));
    printf("Total price 2 : %f" , price[1] + (0.18*price[1]));
    printf("Total price 3 : %f" , price[2] + (0.18*price[2]));
    return 0;
}