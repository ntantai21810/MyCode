#include <iostream>
#include <vector>

using namespace std;

void InputArr(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
}

void Merge(int arr[], int l, int m, int r)
{
	//Number of elements of temp arrays
	int n1 = m - l + 1;
	int n2 = r - m;

	//Create temp arrays
	vector<int> L;
	vector<int> R;

	//Copy data from array to temp arrays
	for (int i = 0; i < n1; i++)
	{
		L.push_back(arr[l + i]);
	}
	for (int j = 0; j < n2; j++)
	{
		R.push_back(arr[m + 1 + j]);
	}

	//Merge the temp arrays back to array
	//Initiate index of subarray
	int i = 0, j = 0, k = l;
	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			arr[k++] = L[i++];
		}
		else
		{
			arr[k++] = R[j++];
		}
	}
	//Copy the remaining elements of temp arrays to array
	while (i < n1)
	{
		arr[k++] = L[i++];
	}
	while (j < n2)
	{
		arr[k++] = R[j++];
	}
}

void MergeSort(int arr[], int l, int r)
{
	if (l < r)
	{
		//Divide array until there is one element remaining
		int m = l + (r - l) / 2;
		MergeSort(arr, l, m);
		MergeSort(arr, m + 1, r);
		//Merge two subarray
		Merge(arr, l, m, r);
	}
}

void OutputArr(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}

//Time complexity: O(nlog(n))

int main()
{
	int arr[100];
	int n;
	cout << "Enter number of elements: ";
	cin >> n;
	InputArr(arr, n);
	MergeSort(arr, 0, n - 1);
	OutputArr(arr, n);
	return 0;
}