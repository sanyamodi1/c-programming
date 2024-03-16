#include<stdio.h>
#include<string.h>
struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1;
    s1.roll = 4;
    s1.cgpa = 6.7;
    strcpy(s1.name ,"st1");
    printf("student name = %s \n" , s1.name);
    printf("student roll = %d \n" , s1.roll);
    printf("student cgpa= %f \n" , s1.cgpa);
    struct student s2;
    s2.roll = 5;
    s2.cgpa = 9.7;
    strcpy(s2.name , "st2");
    printf("student name = %s \n" , s2.name);
    printf("student roll = %d \n" , s2.roll);
    printf("student cgpa= %f \n" , s2.cgpa);
    struct student s3;
    s3.roll = 6;
    s3.cgpa = 8.7;
    strcpy(s3.name , "st3");
    printf("student name = %s \n" , s3.name);
    printf("student roll = %d \n" , s3.roll);
    printf("student cgpa= %f \n" , s3.cgpa);


    return 0;
}