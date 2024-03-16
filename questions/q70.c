#include<stdio.h>
#include<string.h>
void checkchar(char str[] , char ch);
int main(){
    char str[] = "Sanya";
    char ch = 'a';
    char ch1 = 'x';
    checkchar(str , ch);
    return 0;
}
void checkchar(char str[] , char ch){
    for(int i = 0 ; str[i] != '\0' ; i++){
        if(str[i] == ch){
            printf("character is present \n");
            return;
        }  
    }
    printf("character is not present \n");
}