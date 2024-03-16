#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter a number :\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum++;
        }
    }
    if (sum == 2)
    {
        printf("%d is a prime number", n);
    }
    else
    {
        printf("not a prime");
    }

    return 0;
}