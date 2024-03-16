#include<stdio.h>
void arr1(int arr[] , int n);
void new(int arr[] , int d , int posn, int value);
int main(){
    int n , value , posn;
    printf("Enter the no of elements in array:");
    scanf("%d" , &n);
    int arr[n];
    arr1(arr, n);
    printf("\n Enter the posn to be inserted :");
    scanf("%d" , &posn);
    printf("Enter the value to be inserted :");
    scanf("%d" , &value);
    n++;
    new(arr, n , posn , value);
    for (int i = 0 ; i < n ; i++){
        printf("%d \t" , arr[i]);
    }
    return 0;
}
void arr1(int arr[] , int n){
    for (int i = 0 ; i < n ; i++){
        scanf("%d" , &arr[i]);
    }
     for (int i = 0 ; i < n ; i++){
      printf("%d \t" , arr[i]);  
     }  
}
void new(int arr[] , int n, int posn , int value){
    for (int i = n; i >= posn ; i--){    
        arr[i]=arr[i-1];
        arr[posn - 1] = value;
    }
}

