/*#include<stdio.h>
int main(){
    float celsius;
    printf("enter the temp in celsius :");
    scanf("%f" , celsius);
    float fahrenheit;
    fahrenheit= (9/5 * celsius)  + 32;
    printf(" Fahrenheit %f" , fahrenheit);
    return 0;


}
*/
#include<stdio.h>
int main()
{
 float fahrenheit, celsius;
 //get the limit of fibonacci series
 printf("Enter celsius: \n");
 scanf("%f",&celsius);
 fahrenheit = (celsius * 1.8) + 32;
 printf("f : %f \n", fahrenheit);
 return 0;
}