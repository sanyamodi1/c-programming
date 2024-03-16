You are given a number say 123 , return the no by reversing it i.e 321.

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    float ans = 0;
    cout << "Enter the no you want to reverse";
    cin >> n;
    int intMin = -pow(2, 31); 
    int intMax = pow(2, 31) - 1;
 while (n != 0)
    {
        int digit = n % 10; 
        getting the last digit of the number
        if (ans < intMin / 10 && ans > intMax / 10)
 {
            cout << "0";
        }
        ans = (ans * 10) + digit;
 n = n / 10; 
  }
    cout << ans;
}

