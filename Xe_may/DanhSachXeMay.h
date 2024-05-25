#pragma once
#include "Xe_may.h"
#include <iostream>
#include <vector>
using namespace std;
class DanhSachXeMay
{
private:
	vector<Xe_may> ds;
	int soxemay;

public:
	void Nhap();
	void Xuat() const;
	double TinhTong();

};