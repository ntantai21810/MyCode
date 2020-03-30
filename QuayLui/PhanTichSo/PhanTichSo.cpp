#include <iostream>

using namespace std;

void KhoiTao(int a[], int t[])
{
	a[0] = 1;
	t[0] = 0;
}

void InCauHinh(int a[], int k)
{
	for (int i = 1; i <= k; i++)
	{
		if (i == k)
		{
			cout << a[i];
		}
		else
		{
			cout << a[i] << " + ";
		}
	}
	cout << endl;
}

void XuLy(int a[], int t[], int n, int i)
{
	for (int j = a[i - 1]; j <= n - t[i - 1]; j++)
	{
		a[i] = j;
		t[i] = t[i - 1] + j;
		if (t[i] == n)
		{
			InCauHinh(a, i);
		}
		else
		{
			XuLy(a, t, n, i + 1);
		}
	}

}

int main()
{
	int a[40];
	int t[40];
	int n;
	cout << "NHAP N: ";
	cin >> n;
	KhoiTao(a, t);
	XuLy(a, t, n, 1);
	return 0;
}