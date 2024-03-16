Given an array of integers arr return true if the no of occurences of each value in the array is unique or false otherwise.
#include<iostream>
using namespace std;
bool checkUniqueFrequency(int arr[], int n)
{

	int frequency[n+1];

	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[j] == i) {
				frequency[i - 1]++;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j || frequency[i] == 0)
				continue;
			if (frequency[i] == frequency[j]) {
				return false;
			}
		}
	}
	return true;
}
int main()
{
	int arr[] = { 1,2,2,3,3,3,3,4,4,4,4 };
	int n = sizeof arr / sizeof arr[0];
	bool res = checkUniqueFrequency(arr, n);

	if (res)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
