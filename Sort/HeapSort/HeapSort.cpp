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

void Heapify(int arr[], int n, int i)
{
	//Initiate largest as root
	int Largest = i;	
	int l = 2 * i + 1;
	int r = 2 * i + 2;

	//If left child is greater than root
	if (l < n && arr[l] > arr[Largest])
	{
		Largest = l;
	}
	//If right child is greater than root so far
	if (r < n && arr[r] > arr[Largest])
	{
		Largest = r;
	}
	//If largest is not root
	if (i != Largest)
	{
		swap(arr[i], arr[Largest]);
		//Recursively heapify the affected sub-tree
		Heapify(arr, n, Largest);
	}
}

//The main function of heap sort
void HeapSort(int arr[], int n)
{
	//Build heap
	//Consider from final parent
	for (int i = n / 2 - 1; i >= 0; i--)
	{
		Heapify(arr, n, i);
	}
	//One bye one extract the last element from heap
	for (int i = n - 1; i >= 0; i--)
	{
		//Move current root to end
		swap(arr[0], arr[i]);
		//Call heap on remaining heap
		Heapify(arr, i, 0);
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
	HeapSort(arr, n);
	OutputArr(arr, n);
	return 0;
}