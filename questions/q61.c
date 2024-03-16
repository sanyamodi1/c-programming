#include<stdio.h>
int arr2(int arr [], int n);
int main(){
    int arr[] = {1,2,3,4,3,2,1,7,9,11};
    arr2(arr , 10);
    
    return 0;
}
int arr2(int arr[] , int n ){
    int max = arr[0];
    for (int i = 0; i < n ; i++){
        if(arr[i] > max)
        max = arr[i];
     } 
        
 printf("The max digit in the array is %d" , max);
    }
    
