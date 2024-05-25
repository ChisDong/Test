#pragma once
#include "Banh_xe.h"
#include <iostream>
using namespace std;
class BanhXe_D : public Banh_xe
{
public:
	BanhXe_D()
	{
		Loai_banh_xe = 'D';
		Don_Gia = 400;
	}
};

