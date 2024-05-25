#pragma once
#include "Khung_xe.h"
#include <iostream>
using namespace std;
class KhungXe_nhua : public Khung_xe
{
public:
	KhungXe_nhua()
	{
		Loai_khung_xe = 'Nhua';
		Don_Gia = 200;
	}
};

