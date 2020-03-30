#include <iostream>

int a[100];
int n;

using namespace std;

void DatMacDinh(int a[])
{
	for (int i = 0; i < n; i++)
	{
		a[i] = i + 1;
	}
}

void SapXep(int a[], int ViTri)
{
	for (int i = ViTri; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] < a[i])
			{
				swap(a[i], a[j]);
			}
		}
	}
}

void InCauHinh(int a[])
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i];
	}
	cout << endl;
}


void SinhHoanVi(int a[])
{
	int i = n - 2;
	InCauHinh(a);	//In cau hinh dau tien
	while (i >= 0)	//Duyet den cau hinh cuoi cung
	{
		while (i >= 0 && a[i] > a[i + 1])	//Tim phan tu i la phan tu lien truoc doan giam dan tu cuoi ve
		{
			i--;
		}
		if (i >= 0)		//Neu chua phai cau hinh cuoi cung
		{
			for (int j = n - 1; j > i; j--)	//Trong doan giam dan tim phan tu vua du lon hon a[i]
			{
				if (a[j] > a[i])		//Doi cho a[i] va phan tu do
				{
					swap(a[i], a[j]);
					break;
				}
			}
			SapXep(a, i + 1);		//Sap xep doan sau thanh cau hinh nho nhat (sap xep tang dan)
			InCauHinh(a);			//In cau hinh
			i = n - 2;				//Duyet lai tu cuoi ve
		}	
	}
}

int main()
{
	cout << "NHAP N: ";
	cin >> n;
	DatMacDinh(a);
	SinhHoanVi(a);
	return 0;
}