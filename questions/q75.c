#include<stdio.h>
#include<string.h>
typedef struct bankAccountDetails{
    int accno;
    char name[100];
} acc;
int main(){
    acc acc1 = {33 , "person1"};
    acc acc2 = {34 , "person2"};
    acc acc3 = {35 , "person3"};
    acc acc4 = {36 , "person4"};
    acc acc5 = {37 , "person5"};
    printf("%d , %s" , acc1.accno , acc1.name);\
    printf("%d , %s" , acc2.accno , acc2.name);
    printf("%d , %s" , acc3.accno , acc3.name);
    printf("%d , %s" , acc4.accno , acc4.name);
    printf("%d , %s" , acc5.accno , acc5.name);

    return 0;
}