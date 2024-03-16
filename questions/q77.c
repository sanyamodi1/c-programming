#include<stdio.h>
#include<string.h>
int main(){
    FILE *fptr;
    fptr = fopen("apple.txt" , "r");
    int n;
    fscanf(fptr , "%d" , &n);
    printf("number = %d \n" , n);
    fscanf(fptr , "%d " , &n);
    printf("number = %d \n" , n);
    fscanf(fptr , "%d" , &n);
    printf("number = %d \n" , n);
    fscanf(fptr , "%d" , &n);
    printf("number = %d \n" , n);
    fscanf(fptr , "%d" , &n);
    printf("number = %d \n" , n);
    fclose(fptr);
    return 0;
}