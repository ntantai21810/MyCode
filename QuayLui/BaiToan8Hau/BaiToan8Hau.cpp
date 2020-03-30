#include <iostream>

using namespace std;

//Dat n quan hau vao ban co NxN sao cho cac quan hau khong an nhau

bool a[100];		//Kiem tra cot
bool b[100];	//Kiem tra duong cheo DB-TB
bool c[100];	//Kiem tra duong cheo DN-TB
int x[100];		//Luu vi tri cac quan hau

int n;
void DatMacDinh()
{
	for (int i = 1; i <= n; i++)
	{
		a[i] = true;
	}
	for (int i = 2; i <= 2 * n; i++)
	{
		b[i] = true;
	}
	for (int i = 1 - n; i <= n - 1; i++)
	{
		c[i + n] = true;
	}
	for (int i = 1; i <= n; i++)
	{
		x[i] = 0;
	}
}

void InKetQua()
{
	for (int k = 1; k <= n; k++)
	{
		cout << "(" << k << ", " << x[k] << ")  ";
	}
	cout << endl;
}

void XuLy(int i)
{
	for (int j = 1; j <= n; j++)
	{
		if (a[j] == true && b[i + j] == true && c[i - j + n] == true)
		{
			x[i] = j;
			if (i == n)
			{
				InKetQua();
			}
			else
			{
				a[j] = false;
				b[i + j] = false;
				c[i - j + n] = false;
				XuLy(i + 1);
				a[j] = true;
				b[i + j] = true;
				c[i - j + n] = true;
			}
		}
	}
}

int main()
{
	cout << "NHAP N: ";
	cin >> n;
	DatMacDinh();
	XuLy(1);
	return 0;
}