#include "Dong_co.h"
#include <iostream>
using namespace std;
void Dong_co::Nhap()
{
	cout << "Nhap nha san xuat ";
	cin.ignore();
	getline(cin, this->Nha_sx);
	cout << "Nhap ma dong co: ";
	cin >> this->Ma_dong_co;
}
void Dong_co::Xuat()
{
	cout << "Ma dong co: " << this->Ma_dong_co << endl;
	cout << "Nha san xuat: " << this->Nha_sx << endl;
	cout << "Gia tri dong co: " << this->Don_gia << endl;
}
double Dong_co::Getdon_gia()
{
	return this->Don_gia;
}