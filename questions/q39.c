#include<stdio.h>
float CtoF(float C);
int main(){
    float C;
    printf("Enter temp in celsius:");
    scanf("%f" , &C);
    printf("Temp in F is %f" , CtoF(C));
    return 0;
}
float CtoF(float C){
    float F = C*1.8 + 32;// (C*9.0/5.0) + 32 here 9/5 will be considered as 1.
    return F;
}