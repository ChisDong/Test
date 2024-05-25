#pragma once
#include "Banh_xe.h"
#include <iostream>
using namespace std;
class BanhXe_E : public Banh_xe
{
public:
	BanhXe_E()
	{
		Loai_banh_xe = 'E';
		Don_Gia = 300;
	}
};

