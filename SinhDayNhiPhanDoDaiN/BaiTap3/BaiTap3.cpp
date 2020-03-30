#include <iostream>
#include <string>

using namespace std;

//So cach sap n nguoi vao ban dai

void NhapChuoi(string b[], int n)
{
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		getline(cin, b[i]);
	}
}

void DatMacDinh(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		a[i] = i + 1;
	}
}

void SapXep(int a[], int n, int ViTri)
{
	for (int i = ViTri; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				swap(a[i], a[j]);
			}
		}
	}
}

void InChuoi(int a[], string b[], int n)
{
	for (int j = 0; j < n; j++)
	{
		cout << b[a[j] - 1] << "   ";
	}
	cout << endl;
}

void XuLy(int a[], string b[], int n)
{
	int i = n - 2;
	InChuoi(a, b, n);
	while (i >= 0)
	{
		while (i >= 0 && a[i] > a[i + 1])
		{
			i--;
		}
		if (i >= 0)
		{
			for (int j = n - 1; j > i; j--)
			{
				if (a[j] > a[i])
				{
					swap(a[i], a[j]);
					break;
				}
			}
			SapXep(a, n, i + 1);
			InChuoi(a, b, n);
			i = n - 2;
		}
	}
}

int main()
{
	int a[100];
	int n;
	string b[100];
	cout << "NHAP N: ";
	cin >> n;
	NhapChuoi(b, n);
	DatMacDinh(a, n);
	cout << "\t SO CACH SAP XEP: " << endl;
	XuLy(a, b, n);
	return 0;
}