#pragma once
#include <iostream>
#include <string>
using namespace std;

class Banh_xe
{
protected:
	int Ma_banh_xe;
	int Don_Gia;
	char Loai_banh_xe;
	string Hang_sx;

public:
	void Nhap();
	void Xuat();
	double Getdon_gia();
};

