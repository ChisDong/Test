#include "Banh_xe.h"
#include <iostream>
using namespace std;
void Banh_xe::Nhap()
{
	cout << "Nhap nha san xuat: ";
	cin.ignore();
	getline(cin, this->Hang_sx);
	cout << "Nhap ma banh xe: ";
	cin >> this->Ma_banh_xe;
}
void Banh_xe::Xuat()
{
	cout << "Loai banh xe " << this->Loai_banh_xe << endl;
	cout << "Ma banh xe: " << this->Ma_banh_xe << endl;
	cout << "Nha san xuat: " << this->Hang_sx << endl;
	cout << "Gia tri: " << this->Don_Gia << endl;
}
double Banh_xe::Getdon_gia()
{
	return this->Don_Gia;
}
