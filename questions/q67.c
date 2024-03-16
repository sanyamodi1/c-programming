#include<stdio.h>
#include<string.h>
void salting(char pass[]);
int main(){
    char password[200];
    scanf("%s" , &password);
    salting(password);
    return 0;
}
void salting(char pass[]){
    char newpass[200];
    char salt[] = "123";
    strcpy(newpass , pass);
    strcat(newpass , salt);
    puts(newpass);
}