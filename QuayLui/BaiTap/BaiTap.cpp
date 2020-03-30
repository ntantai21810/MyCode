#include <iostream>

using namespace std;

//Chinh hop lap chap k cua n

int a[100];
int n;
int k;

void DatMacDinh()
{
	for (int i = 1; i <= n; i++)
	{
		a[i] = 0;
	}
}

void InKetQua()
{
	for (int i = 1; i <= k; i++)
	{
		cout << a[i];
	}
	cout << endl;
}

void XuLy(int i)
{
	for (int j = 1; j <= n; j++)
	{
		a[i] = j;
		if (i == k)
		{
			InKetQua();
		}
		else
		{
			XuLy(i + 1);
		}
	}
}

int main()
{
	cout << "NHAP N: ";
	cin >> n;
	cout << "NHAP K: ";
	cin >> k;
	DatMacDinh();
	XuLy(1);
	return 0;
}