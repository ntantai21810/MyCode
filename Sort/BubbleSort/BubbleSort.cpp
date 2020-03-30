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

//Compare the adjecent elements
//O(n * n)
//Best case: O(n)
void BubbleSort(int arr[], int n)		
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
		}
	}
}

int main()
{
	int arr[100];
	int n;
	cout << "Enter number elements: ";
	cin >> n;
	InputArr(arr, n);
	BubbleSort(arr, n);
	OutputArr(arr, n);
	return 0;
}