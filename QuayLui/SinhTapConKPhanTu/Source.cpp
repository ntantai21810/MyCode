#include <iostream>

using namespace std;

void DatMacDinh(int a[], int n)
{
	for (int i = 0; i <= n; i++)
	{
		a[i] = 0;
	}
}

void InCauHinh(int a[], int k)
{
	for (int i = 1; i <= k; i++)
	{
		cout << a[i];
	}
	cout << endl;
}

void XuLy(int a[], int n, int k, int i)
{
	for (int j = a[i - 1] + 1; j <= n - k + i; j++)	//Xet tat ca gia tri co the nhan
	{
		a[i] = j;			//Thu tung gia tri
		if (i == k)			//Dat den cuoi mang thi in ra
		{
			InCauHinh(a, k);
		}
		else             //Thu gia tri cho cac phan tu ke tiep
		{
			XuLy(a, n, k, i + 1);
		}
	}
}

int main()
{
	int a[100];
	int n, k;
	cout << "NHAP N: ";
	cin >> n;
	cout << "NHAP K: ";
	cin >> k;
	DatMacDinh(a, n);
	XuLy(a, n, k, 1);
	return 0;
}