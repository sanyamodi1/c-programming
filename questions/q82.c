#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("q81.txt" , "w");
    char ch;
    char str[100];
    int count = 0;
    while (
        ch = fgetc(fptr);
        if (ch == EOF){
            break;}
        )
        else {
            if (ch == 'a' , ch == 'e' , ch == 'i' , ch == 'o' , ch == 'u'){
                count ++;
                fprintf(fptr , "%d" , count);
            }
        }
    }
    fclose(fptr);
    return 0;
}