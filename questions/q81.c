#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("q81.txt" , "r");
    char ch;
    // do {
    //     ch = fgetc(fptr);
    //     printf("%c" , ch);
    // }
    // while (ch != EOF);
    
    char ch1[6];
    ch1[0] = fgetc(fptr);
    ch1[1] = fgetc(fptr);
    ch1[2] = fgetc(fptr);
    ch1[3] = fgetc(fptr);
    ch1[4] = fgetc(fptr);
    ch1[5] = '\0';
    puts(ch1);
    int count = 0 ;
    for (int i = 0 ; i <= 4 ; i++){
        if (ch1[i] == 'a' || ch1[i] == 'e' || ch1[i] == 'i'|| ch1[i] == 'o' || ch1[i] == 'u'){
            count++;
        }
    }
   printf("%d" , count);
   fclose(fptr);
   fptr = fopen("q81.txt" , "w");
   fprintf(fptr , "%d" , count);
   fclose(fptr);
    return 0;
}