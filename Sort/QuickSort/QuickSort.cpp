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

//This function take the last element as pivot, places the pivot element at its correct position
//Places all smaller elements to left of pivot and greater to right of pivot
//Get index of correct position of pivot
int Partition(int arr[], int l, int h)
{
	//Pivot is the last element
	int Pivot = arr[h];
	//Index of smaller element
	int i = l;
	for (int j = l; j <= h - 1; j++)
	{
		if (arr[j] < Pivot)
		{
			swap(arr[i], arr[j]);
			i++;
		}
	}
	swap(arr[i], arr[h]);
	return i;
}

void QuickSort(int arr[], int l, int h)
{
	if (l < h)
	{
		int PivotIndex = Partition(arr, l, h);
		QuickSort(arr, l, PivotIndex - 1);
		QuickSort(arr, PivotIndex + 1, h);
	}
}

//Time complexity: O(nlog(n))

int main()
{
	int arr[100];
	int n;
	cout << "Enter number elements: ";
	cin >> n;
	InputArr(arr, n);
	QuickSort(arr, 0, n - 1);
	OutputArr(arr, n);
	return 0;
}