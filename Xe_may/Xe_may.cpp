#include "BanhXe_D.h"
#include "BanhXe_E.h"
#include "Dongco_A.h"
#include "Dongco_B.h"
#include "Dongco_C.h"
#include "KhungXe_nhom.h"
#include "KhungXe_nhua.h"
#include "Xe_may.h"
#include <iostream>

using namespace std;
void Xe_may::Nhap()
{
	cout << "Nhap ma xe may: ";
	cin >> this->Ma_xe;
	char loai_dong_co = '\0';
	cout << "--------------" << endl;
	cout << "[A] dong co loai A " << endl;
	cout << "[B] dong co loai B " << endl;
	cout << "[C] dong co loai C " << endl;
	cout << "Nhap loai dong co: ";
	cin >> loai_dong_co;
	switch (loai_dong_co)
	{
	case ('A'):
	{
		dongco = new Dongco_A;
		break;
	}

	case ('B'):
	{
		dongco = new Dongco_B;
		break;
	}
	case ('C'):
	{
		dongco = new Dongco_C;
		break;
	}
	default:
		break;
	}
	dongco->Nhap();
	cout << "--------------" << endl;
	char loai_banh_xe = '\0';
	cout << "[D] banh xe loai D " << endl;
	cout << "[E] banh xe loai E " << endl;
	cout << "Nhap loai banh xe: ";
	cin >> loai_banh_xe;
	switch (loai_banh_xe)
	{
	case ('D'):
	{
		banhxe = new BanhXe_D;
		break;
	}

	case ('E'):
	{
		banhxe = new BanhXe_E;
		break;
	}
	default:
		break;
	}
	banhxe->Nhap();
	cout << "--------------" << endl;
	int loai_khung_xe = 0;
	cout << "[1] banh xe loai nhom " << endl;
	cout << "[2] banh xe loai nhua " << endl;
	cout << "Nhap loai khung xe: ";
	cin >> loai_khung_xe;
	switch (loai_khung_xe)
	{
	case (1):
	{
		khungxe = new KhungXe_nhom;
		break;
	}

	case (2):
	{
		khungxe = new KhungXe_nhua;
		break;
	}
	default:
		break;
	}
	khungxe->Nhap();
	cout << "**************" << endl;
}
void Xe_may::Xuat() const
{
	cout << "Ma so xe may " << Ma_xe << endl;
	dongco->Xuat();
	cout << "--------------" << endl;
	banhxe->Xuat();
	cout << "--------------" << endl;
	khungxe->Xuat();
}
double Xe_may::TinhTong() const
{
	return banhxe->Getdon_gia() + khungxe->Getdon_gia() + dongco->Getdon_gia();
}