#include <iostream>
#include <string>

using namespace std;

//In ra so cach chon k nguoi trong n nguoi

void NhapChuoi(string a[], int n)
{
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		getline(cin, a[i]);
	}
}

void XuatChuoi(string a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}
}

void DatMacDinh(int b[], int n)
{
	for (int i = 0; i < n; i++)
	{
		b[i] = i + 1;
	}
}

void TangPhanTu(int b[], int ViTri, int n)
{
	for (int i = ViTri; i < n; i++)
	{
		b[i] = b[i - 1] + 1;
	}
}

void LietKe(string a[], int b[], int n, int k)
{
	int i = k - 1;
	for (int j = 0; j < k; j++)
	{
		cout << a[b[j] - 1] << "   ";
	}
	cout << endl;
	while (i >= 0)
	{
		if (b[i] == n - k + i + 1)
		{
			i--;
		}
		else
		{
			b[i] = b[i] + 1;
			TangPhanTu(b, i + 1, n);
			for (int j = 0; j < k; j++)
			{
				cout << a[b[j] - 1] << "   ";
			}
			i = k - 1;
			cout << endl;
		}
	}
}

int main()
{
	int n, k;
	string a[100];
	int b[100];
	cout << "NHAP N: ";
	cin >> n;
	cout << "NHAP K: ";
	cin >> k;
	NhapChuoi(a, n);
	DatMacDinh(b, n);
	cout << "\tSO CACH CHON: \n";
	LietKe(a, b, n, k);
	return 0;
}