#pragma once
#include <iostream>
#include <string>
using namespace std;
class Dong_co
{
protected:
	int Ma_dong_co;
	char Loai_dong_co;
	int Don_gia;
	string Nha_sx;

public:
	Dong_co()
	{
		Ma_dong_co = 0;
		Loai_dong_co = 'A';
		Don_gia = 0;
		Nha_sx = " Bin";
	}
	virtual void Nhap();
	virtual void Xuat();
	double Getdon_gia();
};

