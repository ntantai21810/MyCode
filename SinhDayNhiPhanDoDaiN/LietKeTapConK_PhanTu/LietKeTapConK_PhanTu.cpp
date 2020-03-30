#include <iostream>

using namespace std;

int n, k;
int a[100];

void datMacDinh(int a[])
{
	for (int i = 0; i < n; i++)
	{
		a[i] = i + 1;
	}
}

void inCauHinh(int a[])
{
	for (int i = 0; i < k; i++)
	{
		cout << a[i];
	}
	cout << endl;
}

void tangPhanTu(int a[], int viTri)	//Dat ve gioi han duoi
{
	for (int i = viTri; i < n; i++)
	{
		a[i] = a[i - 1] + 1;
	}
}

void inDanhSach(int a[])
{
	int i = k - 1;
	inCauHinh(a);	//In cau hinh dau tien
	while (i >= 0)
	{
		if (a[i] == n - k + i + 1)	//Kiem tra xem phan tu co dat gioi han chua
		{
			i--;
		}
		else
		{
			a[i] = a[i] + 1;
			tangPhanTu(a, i + 1);	//Dat cac phan tu sau ve gioi han duoi
			inCauHinh(a);
			i = k - 1;				//Xet lai tu cuoi
		}
	}
}

int main()
{
	cout << "NHAP N: ";
	cin >> n;
	cout << "NHAP K: ";
	cin >> k;
	datMacDinh(a);
	inDanhSach(a);
	return 0;
}