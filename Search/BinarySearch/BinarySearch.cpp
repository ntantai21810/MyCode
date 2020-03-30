#include <iostream>

using namespace std;

void InputArr(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
}

int BinarySearch(int arr[], int x, int l, int r)
{
	int m = l + (r - l) / 2;
	//If middle element = x
	if (arr[m] == x)
		return m;
	else if (x < arr[m])
	{
		//If element is smaller than middle, it can be present in left sub-array
		return BinarySearch(arr, x, l, m - 1);
	}
	else
	{
		return BinarySearch(arr, x, m + 1, r);
	}
	//If element is not in array
	return -1;
}

int main()
{
	int arr[100];
	int n, x;
	cout << "Enter number of elements: ";
	cin >> n;
	InputArr(arr, n);
	cout << "Enter x: ";
	cin >> x;
	cout << "Index: " << BinarySearch(arr, x, 0, n - 1);
	return 0;
}