#include<stdio.h>
int main(){
    int marks;
    printf(" enter the marks \n");
    scanf("%d" , &marks);
    // marks > 30 ? printf(" pass ") : printf(" fail ") ;
    /*if(marks <= 30){
        printf("fail");
    }
    else{
        printf("pass");
    }*/
    if(marks <= 30 ){
        printf("fail");
    }
    else if (marks > 30 && marks <= 100){ printf(" pass");
    }
    else{
        printf(" wrong marks");
    }
    return 0;
}