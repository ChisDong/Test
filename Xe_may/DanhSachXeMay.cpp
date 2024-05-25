#include "DanhSachXeMay.h"
#include "Xe_may.h"
#include <iostream>
using namespace std;
void DanhSachXeMay::Nhap()
{
	cout << "Nhap so luong xe may: ";
	cin >> this->soxemay;
	for (int i = 0; i < this->soxemay; i++)
	{
		Xe_may xemay;
		xemay.Nhap();
		ds.push_back(xemay);
	}
}
void DanhSachXeMay::Xuat() const
{
	for (const auto& xemay : ds)
	{
		cout << "Tong gia tri xe may: " << xemay.TinhTong() << endl;
		xemay.Xuat();
	}
}