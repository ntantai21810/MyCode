#include <iostream>

using namespace std;

int n;
int a[100];

void MacDinh(int a[])
{
	for (int i = 0; i < n; i++)
	{
		a[i] = 0;
	}
}

void inCauHinh(int a[])
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i];
	}
	cout << endl;
}

void datBang0(int a[], int viTri)
{
	for (int i = viTri; i < n; i++)
	{
		a[i] = 0;
	}
}

void sinhChuoiNhiPhan(int a[])
{
	inCauHinh(a);	//In cau hinh dau tien
	int i = n - 1;
	while (i > 0)
	{
		if (a[i] == 1)
		{
			i--;
		}
		if (a[i] == 0)
		{
			a[i] = 1;
			datBang0(a, i + 1);
			inCauHinh(a);
			i = n - 1;
		}
	}
}

int main()
{
	cout << "Nhap n: ";
	cin >> n;
	MacDinh(a);
	sinhChuoiNhiPhan(a);
	return 0;
}