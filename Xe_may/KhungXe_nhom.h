#pragma once
#include "Khung_xe.h"
#include <iostream>
using namespace std;
class KhungXe_nhom : public Khung_xe
{
public:
	KhungXe_nhom()
	{
		Loai_khung_xe = "Nhom";
		Don_Gia = 500;
	}
};

