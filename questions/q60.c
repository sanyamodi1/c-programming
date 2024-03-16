#include<stdio.h>
int arr1(int arr[] , int n , int number);
int main(){
    int j;
    int n;
    int arr[] = {1,2,3,4,2,3,4,2,1,2,3,2,1,4,5,6,5,5,6,9};
    printf("Enter the number :");
    scanf("%d" , &j);
    n = arr1(arr , 20 , j);
    printf("The number %d occurs %d times" , j , n);
    return 0;
}
int arr1(int arr [] , int n , int number){
    int count = 0;
    int j;
    arr[number] = j;
    for (int i = 0 ; i < n ; i++){
        if(arr[i] == number){
            count++;
        }
    }
    return count;
}