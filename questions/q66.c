#include<stdio.h>
#include<string.h>
int main(){
    char string1[100];
    char str;
    int i = 0;
   
    while( str != '\n'){
        scanf("%c" , &str);
        string1[i] = str;
        i++;
    }
    string1[i] = '\0';
    puts(string1);
    return 0;
}