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

//Array is considered into two part (unsorted and sorted)
//Select the lowest element in unsorted array
//Bring it to the starting position
//Chang the counter for unsorted array by 1
//O(n * n)
void SelectionSort(int arr[], int n)
{
	int MinIndex;
	for (int i = 0; i < n - 1; i++)
	{
		MinIndex = i;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[MinIndex])
				MinIndex = j;
		}
		swap(arr[MinIndex], arr[i]);
	}
}

int main()
{
	int arr[100];
	int n;
	cout << "Enter number elements: ";
	cin >> n;
	InputArr(arr, n);
	SelectionSort(arr, n);
	OutputArr(arr, n);
	return 0;
}