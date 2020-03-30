#include <iostream>

using namespace std;

void InputArr(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
}

int LinearSearch(int arr[], int n, int x)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == x)
		{
			return i;
		}
	}
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
	cout << "Index: " << LinearSearch(arr, n, x);
	return 0;
}