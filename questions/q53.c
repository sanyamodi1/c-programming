#include<stdio.h>
void letter(char *a );
int main(){
    char a , z;
    printf("the alphabets \n are \n");
    letter(&a);

    return 0;
}
void letter(char *a){
    char z = 'z';
    for(char a = 'a' ; a <= z ; a++){
        printf("%c \n " , a);

    }
}