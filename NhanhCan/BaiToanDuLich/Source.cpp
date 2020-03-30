#include <iostream>
#define MAX 999999

using namespace std;

int C[30][30];	//Ma tran chi phi
int X[30], BestWay[30];	//X de thu kha nang, BestWay de ghi nhan nghiem
int T[30];	//Luu chi phi di tu X1 den Xi
bool Free[30];	//Danh dau diem tu do
int Min;		//Chi phi it nhat
int SoThanhPho, SoTuyenDuong;

void Nhap()
{
	cout << "NHAP SO THANH PHO: ";
	cin >> SoThanhPho;
	cout << "NHAP SO DUONG DI: ";
	cin >> SoTuyenDuong;

	//Khoi tao mac dinh
	for (int i = 1; i <= SoThanhPho; i++)
	{
		for (int j = 1; j <= SoThanhPho; j++)
		{
			if (i == j)
			{
				C[i][j] = 0;
			}
			else
			{
				C[i][j] = MAX;
			}
		}
	}

	//Nhap chi phi cac tuyen duong
	int i, j;
	for (int k = 1; k <= SoTuyenDuong; k++)
	{
		cin >> i;
		cin >> j;
		cin >> C[i][j];	//Nhap chi phi di tu thanh pho i den j
		C[j][i] = C[i][j];	//Duong di nguoc lai cung chi phi
	}

	//Khoi tao
	Free[1] = false;
	for (int i = 2; i <= SoThanhPho; i++)	//Danh dau cac thanh pho la chua di qua tru thanh pho 1
	{
		Free[i] = true;
	}
	X[1] = 1;	//Xuat phat tu thanh pho 1
	T[1] = 0;	//Chi phi ban dau bang 0
	Min = MAX;
}

void Xuat()
{
	if (Min == MAX)
	{
		cout << "NO SOLUTION" << endl;
	}
	else
	{
		for (int i = 1; i <= SoThanhPho; i++)
		{
			cout << BestWay[i] << "->";
		}
		cout << "1" << endl;
		cout << "COST: " << Min;
	}
}

void XuLy(int i)
{
	for (int j = 2; j <= SoThanhPho; j++)	//Duyet tat ca cac thanh pho
	{
		if (Free[j] == true)
		{
			X[i] = j;		//Thanh pho tiep theo la j
			T[i] = T[i - 1] + C[X[i - 1]][j];	//Tien bang tien truoc cong tien chuyen nay
			if (T[i] < Min)		//Dieu kien kiem tra (ki thuat nhanh can)
			{
				if (i == SoThanhPho)
				{
					if (T[SoThanhPho] + C[X[SoThanhPho]][1] < Min)	//Di ve 1 tien van nho hon
					{
						for (int k = 1; k <= SoThanhPho; k++)	//Cap nhat lai duong di
						{
							BestWay[k] = X[k];
						}
						Min = T[SoThanhPho] + C[X[SoThanhPho]][1];
					}
				}
				else
				{
					Free[j] = false;
					XuLy(i + 1);
					Free[j] = true;
				}
			}
		}
	}
}

int main()
{
	Nhap();
	XuLy(2);
	Xuat();
	return 0;
}