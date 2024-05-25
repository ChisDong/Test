#pragma once
#include <iostream>
#include <string>
using namespace std;
class Khung_xe
{
protected:
	int Ma_khung_xe;
	int Don_Gia;
	string Loai_khung_xe;
	string Hang_sx;

public:
	Khung_xe()
	{
		Ma_khung_xe = 0;
		Don_Gia = 0;
		Loai_khung_xe = "Nhom";
		Hang_sx = "Bin";

	}
	void Nhap();
	void Xuat();
	double Getdon_gia();
};

