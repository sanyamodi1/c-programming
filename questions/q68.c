#include<stdio.h>
#include<string.h>
void slice(char str[] , int n , int m);
int main(){
    char str[] = "hello world";
    slice(str , 3 , 6);
    
    return 0;
}
void slice(char str[] , int n , int m){
    int j = 0;
    char newstr[100];
    for(int i = n ; i <= m; i++ , j++){
        newstr[j] = str[i];   
    }
    newstr[j] = '\0';
    puts(newstr);
}