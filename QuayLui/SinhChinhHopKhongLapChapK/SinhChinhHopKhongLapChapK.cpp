#include <iostream>

using namespace std;

void DatMacDinh(int a[], bool b[], int n)
{
	for (int i = 0; i <= n; i++)
	{
		a[i] = 0;
		b[i] = true;
	}
}

void InCauHinh(int a[], int k)
{
	for (int i = 0; i < k; i++)
	{
		cout << a[i];
	}
	cout << endl;
}

void XuLy(int a[], bool b[], int n, int k, int i)
{
	for (int j = 1; j <= n; j++)	//Duyet tat ca cac truong hop tu 1 toi n
	{
		if (b[j] == true)			//Neu do la phan tu chua bi trung
		{
			a[i] = j;
			if (i == k - 1)			//Neu duyet het k phan tu thi in ra
			{
				InCauHinh(a, k);
			}
			else
			{
				b[j] = false;		//Danh dau phan tu da duoc su dung
				XuLy(a, b, n, k, i + 1);
				b[j] = true;		//Bo danh dau
			}
		}
	}
}

int main()
{
	int a[100];
	bool b[100];	//Kiểm tra xem có phải phần tử tự do
	int n, k;
	cout << "NHAP N: ";
	cin >> n;
	cout << "NHAP K: ";
	cin >> k;
	DatMacDinh(a, b, n);
	XuLy(a, b, n, k, 0);
	return 0;
}