#include <iostream>

using namespace std;

int a[100];
int n;

void DatMacDinh()
{
	for (int i = 0; i < n; i++)
	{
		a[i] = 0;
	}
}

void InCauHinh()
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i];
	}
	cout << endl;
}

void XuLy(int i)
{
	for (int j = 0; j <= 1; j++)	//Thu tat ca gia tri co the nhan
	{
		a[i] = j;
		if (i == n - 1)
		{
			InCauHinh();
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
	DatMacDinh();
	XuLy(0);
	return 0;
}