#include<stdio.h>
#include<string.h>
struct address {
    int houseno;
    int block;
    char city[100];
    char state[100];
};
void printadd(struct address adds);
int main(){
    struct address adds[5];
    printf("Enter the address for person 1 : \n");
    scanf("%d" , &adds[0].houseno);
    scanf("%d" , &adds[0].block);
    scanf("%s" , adds[0].city);
    scanf("%s" , adds[0].state);

    printf("Enter the address for person 2 : \n");
    scanf("%d" , &adds[1].houseno);
    scanf("%d" , &adds[1].block);
    scanf("%s" , adds[1].city);
    scanf("%s" , adds[1].state);

    printf("Enter the address for person 3 : \n");
    scanf("%d" , &adds[2].houseno);
    scanf("%d" , &adds[2].block);
    scanf("%s" , adds[2].city);
    scanf("%s" , adds[2].state);

    printf("Enter the address for person 4 : \n");
    scanf("%d" , &adds[3].houseno);
    scanf("%d" , &adds[3].block);
    scanf("%s" , adds[3].city);
    scanf("%s" , adds[3].state);

    printf("Enter the address for person 5 : \n");
    scanf("%d" , &adds[4].houseno);
    scanf("%d" , &adds[4].block);
    scanf("%s" , adds[4].city);
    scanf("%s" , adds[4].state);
    printadd(adds[0]);
    printadd(adds[1]);
    printadd(adds[2]);
    printadd(adds[3]);
    printadd(adds[4]);

    return 0;
}
void printadd(struct address adds){
    printf("the address of the person is : \n");
    printf("HOUSE NO - %d \n" , adds.houseno);
    printf("BLOCK - %d \n" , adds.block);
    printf("CITY - %s \n" , adds.city);
    printf("STATE - %s \n" , adds.state);
}
