#include "Dongco_B.h"
#include <iostream>
using namespace std;
void Dongco_B::Nhap()
{
	cout << "Nhap nha san xuat: ";
	cin.ignore();
	getline(cin, this->Nha_sx);
	cout << "Nhap ma dong co: ";
	cin >> this->Ma_dong_co;
	cout << "Nhap loai dong co: " << endl;
	cout << "[1] Loai dong co 1 " << endl;
	cout << "[2] Loai dong co 2 " << endl;
	int n;
	cin >> n;
	switch (n)
	{
	case (1):
	{
		tieuchuan = 1;
		Don_gia = 600;
		break;
	}
	case (2):
	{
		tieuchuan = 2;
		Don_gia = 800;
		break;
	}
	case (3):
	{
		tieuchuan = 3;
		Don_gia = 400;
	}
	}
}
void Dongco_B::Xuat()
{
	cout << "Ma dong co: " << this->Ma_dong_co << endl;
	cout << "Nha san xuat " << this->Nha_sx << endl;
	cout << "Tieu chuan " << this->tieuchuan << endl;
	cout << "Don gia " << this->Don_gia << endl;
}