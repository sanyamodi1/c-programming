#include<stdio.h>
void namaste();
void bonjour();
int main(){
    char ch;
    // printf("ARE YOU FRENCH (F) OR INDIAN (I) \n");
    // scanf("%c" , &ch);
    // if(ch== 'I'){
    //      namaste();
    // }
    // else{
    //     bonjour();
    // }
    
    namaste();
    return 0;
}
void namaste(){
    printf("namaste \n");
    bonjour();
}
void bonjour (){
    printf("bonjour \n");
}