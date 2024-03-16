To check whether a number is a power of two or not-
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number";
    cin >> n;
    int no = 1;
    if((n&(n-1)) == 0){
        cout<<"n is power of two";
    }
    else{
        cout<<"not a power of two";
    }
    
    // for (int i = 1; i <= 30; i++)
    // {
    //     if (no < INT32_MAX / 2)
    //      {
    //         no = i * 2;
    //     }
    //     if (no == n)
    //     {
    //         cout << "true";
    //     }
    // }
}
