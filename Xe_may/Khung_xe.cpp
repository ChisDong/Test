#include "Khung_xe.h"
#include <iostream>
using namespace std;
void Khung_xe::Nhap()
{
	cout << "Nhap nha san xuat: ";
	cin.ignore();
	getline(cin, this->Hang_sx);
	cout << "Nhap ma khung xe: ";
	cin >> this->Ma_khung_xe;
}
void Khung_xe::Xuat()
{
	cout << "Loai khung xe " << this->Loai_khung_xe << endl;
	cout << "Ma khung xe: " << this->Ma_khung_xe << endl;
	cout << "Nha san xuat: " << this->Hang_sx << endl;
	cout << "Gia tri: " << this->Don_Gia << endl;
}
double Khung_xe::Getdon_gia()
{
	return this->Don_Gia;
}