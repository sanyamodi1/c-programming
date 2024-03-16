Find all the duplicates in an array
#include <iostream>
using namespace std;
int main()
{
    int ans = 0;
    int arr[7] = {1, 2, 2, 5, 4, 7, 7};
    int r = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < r; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            int temp;
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }

        // cout<<arr[i];
    }
    int index;
    int result = 0;
    for (int i = 0; i < r; i++)
    {
        index = arr[i] - 1; // index = 4 - 1 = 3
        if (arr[index] < 0) //  no
        {
            result = index + 1; // 2
            cout << result << endl;
        }
        else
        {
            arr[i] = -arr[i]; //-2
        }
    }
    return 0;
}
