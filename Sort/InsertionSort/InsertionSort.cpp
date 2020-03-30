#include <iostream>

using namespace std;

void InputArr(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
}

void OutputArr(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}

//Set marker after the firt element
//Select the first element in unsorted array
//Swap element to the right position
//Advance the marker to the right by one element
//O(n * 2)
void InsertionSort(int arr[], int n)	
{
	int j, key;
	for (int i = 1; i < n; i++)
	{
		j = i - 1;
		key = arr[i];
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}
int main()
{
	int arr[100];
	int n;
	cout << "Enter number elements: ";
	cin >> n;
	InputArr(arr, n);
	InsertionSort(arr, n);
	OutputArr(arr, n);
	return 0;
}