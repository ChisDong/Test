#pragma once
#include "Banh_xe.h"
#include "Dong_co.h"
#include "Khung_xe.h"
#include <iostream>
#include <string>
using namespace std;
class Xe_may
{
private:
	int Ma_xe;
	Dong_co* dongco;
	Banh_xe* banhxe;
	Khung_xe* khungxe;

public:
	void Nhap();
	void Xuat() const;
	double TinhTong() const;

};

