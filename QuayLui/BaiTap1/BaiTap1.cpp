#include <iostream>

using namespace std;

//Liet ke tat ca tap con cua S

int a[100];
int b[100];
bool c[100];
int n;

void Nhap()
{
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

void DatMacDinh()
{
	for (int i = 0; i < n; i++)
	{
		b[i] = 0;
		c[i] = true;
	}
}

void InKetQua(int k)
{
	for (int i = 0; i < k; i++)
	{
		cout << b[i] << "  ";
	}
	cout << endl;
}

void XuLy(int i)
{
	for (int j = 0; j < n; j++)
	{
		if (c[j] == true)
		{
			b[i] = a[j];
			InKetQua(i + 1);
			c[j] = false;
			XuLy(i + 1);
			c[j] = true;
		}
	}
}

int main()
{
	cout << "NHAP N: ";
	cin >> n;
	Nhap();
	DatMacDinh();
	XuLy(0);
	return 0;
}