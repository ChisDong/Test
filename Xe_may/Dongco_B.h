#pragma once
#include "Dong_co.h"
#include <iostream>
using namespace std;
class Dongco_B : public Dong_co
{
private:
	int tieuchuan;

public:
	Dongco_B()
	{
		tieuchuan = 0;
		Loai_dong_co = 'B';
	}
	void Nhap() override;
	void Xuat() override;
};

