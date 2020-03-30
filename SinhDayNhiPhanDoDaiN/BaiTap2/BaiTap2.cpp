#include <iostream>

using namespace std;

//Snh chuoi n phan

void DatMacDinh(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		a[i] = 0;
	}
}

void InCauHinh(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i];
	}
	cout << endl;
}

void DatBang0(int a[], int ViTri, int n)
{
	for (int i = ViTri; i < n; i++)
	{
		a[i] = 0;
	}
}

void XuLy(int a[], int n)
{
	int i = n - 1;
	InCauHinh(a, n);
	while (i >= 0)
	{
		while (i >= 0 && a[i] == n)
		{
			i--;
		}
		if (i >= 0)
		{
			a[i] = a[i] + 1;
			DatBang0(a, i + 1, n);
			InCauHinh(a, n);
			i = n - 1;
		}
	}
}

int main()
{
	int a[100];
	int n;
	cout << "NHAP N: ";
	cin >> n;
	DatMacDinh(a, n);
	XuLy(a, n);
	return 0;
}